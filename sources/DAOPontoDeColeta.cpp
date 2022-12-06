#include "../headers/DAOPontoDeColeta.h"

DAOPontoDeColeta::DAOPontoDeColeta()
{
    data_access = new DataAccess("../datasource/ponto-de-coleta.txt", "../datasource/ponto-de-coleta.txt");
    data_line = "";
}
DAOPontoDeColeta::~DAOPontoDeColeta()
{
    delete data_access;
}

void DAOPontoDeColeta::createPontoDeColeta(PontoDeColeta ponto_de_coleta)
{
    data_access->open_output_file(true);

    cleanDataLine();
    if (ponto_de_coleta.getId() != 1)
        data_line = "\n";

    data_line += ponto_de_coleta.toString();

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPontoDeColeta::readPontoDeColeta(int id)
{
    data_access->open_input_file();

    data = data_access->read_data();
    convertToObject(data);

    for (int i = 0; i < objects.size(); i++)
        if (objects[i].getId() == id)
        {
            objects[i].show();
            break;
        }

    data_access->close_input_file();
}

void DAOPontoDeColeta::updatePontoDeColeta(PontoDeColeta ponto_de_coleta)
{
    data_access->open_output_file(false);

    for (int i = 0; i < objects.size(); i++)
        if (objects[i].getId() == ponto_de_coleta.getId())
        {
            objects[i].setEndereco(ponto_de_coleta.getEndereco());

            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects.size(); i++)
        data_line += objects[i].toString() + ((i < objects.size() - 1) ? "\n" : "");

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPontoDeColeta::deletePontoDeColeta(int id)
{
    data_access->open_output_file(false);

    for (int i = 0; i < objects.size(); i++)
        if (objects[i].getId() == id)
        {
            objects.erase(objects.begin() + i, objects.begin() + i + 1);
            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects.size(); i++)
        data_line += objects[i].toString() + ((i < objects.size() - 1) ? "\n" : "");

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPontoDeColeta::convertToObject(std::vector<std::string> data)
{
    objects.clear();

    int id;
    std::string endereco;

    int i = 0;
    while (i < data.size())
    {
        id = std::stoi(data[0 + i]);
        endereco = data[1 + i];

        PontoDeColeta object(id, endereco);
        objects.push_back(object);

        i += 2;
    }
}

void DAOPontoDeColeta::cleanDataLine()
{
    data_line = "";
}