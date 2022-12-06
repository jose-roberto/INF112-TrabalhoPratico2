#include "../headers/DAOColeta.h"

DAOColeta::DAOColeta()
{
    data_access_coleta = new DataAccess("../datasource/coleta.txt", "../datasource/coleta.txt");
    data_access_residuos_coleta = new DataAccess("../datasource/residuos-da-coleta.txt", "../datasource/residuos-da-coleta.txt");

    data_line = "";
}

DAOColeta::~DAOColeta()
{
    delete data_access_coleta, data_access_residuos_coleta;
}

void DAOColeta::createColeta(Coleta coleta)
{
    data_access_coleta->open_output_file(true);

    createResiduosDaColeta(coleta);

    cleanDataLine();
    if (coleta.get_id() != 1)
        data_line = "\n";

    data_line += coleta.toStringColeta();

    data_access_coleta->update_output_file(data_line);

    data_access_coleta->close_output_file();
}

void DAOColeta::readColeta()
{
    data_access_coleta->open_input_file();

    data = data_access_coleta->read_data();
    convertToObject(data, true);

    for (int i = 0; i < objects_coleta.size(); i++)
        objects_coleta[i].show();

    data_access_coleta->close_input_file();
}

void DAOColeta::updateColeta(Coleta coleta)
{
    data_access_coleta->open_output_file(false);

    for (int i = 0; i < objects_coleta.size(); i++)
        if (objects_coleta[i].get_id() == coleta.get_id())
        {
            objects_coleta[i].set_nome_doadora(coleta.get_nome_doadora());
            objects_coleta[i].set_nome_receptora(coleta.get_nome_receptora());
            objects_coleta[i].set_data(coleta.get_data());
            objects_coleta[i].set_endereco_coleta(coleta.get_endereco_coleta());
            objects_coleta[i].set_residuos(coleta.get_residuos());
            objects_coleta[i].set_status(coleta.get_status());

            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects_coleta.size(); i++)
        data_line += objects_coleta[i].toStringColeta() + ((i < objects_coleta.size() - 1) ? "\n" : "");

    data_access_coleta->update_output_file(data_line);

    data_access_coleta->close_output_file();
}

void DAOColeta::deleteColeta(int id)
{
    data_access_coleta->open_output_file(false);

    for (int i = 0; i < objects_coleta.size(); i++)
        if (objects_coleta[i].get_id() == id)
        {
            objects_coleta.erase(objects_coleta.begin() + i, objects_coleta.begin() + i + 1);
            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects_coleta.size(); i++)
        data_line += objects_coleta[i].toStringColeta() + ((i < objects_coleta.size() - 1) ? "\n" : "");

    data_access_coleta->update_output_file(data_line);

    data_access_coleta->close_output_file();
}

void DAOColeta::createResiduosDaColeta(Coleta coleta)
{
    data_access_residuos_coleta->open_output_file(true);

    cleanDataLine();
    if (coleta.get_id() != 1)
        data_line = "\n";
    for (int i = 0; i < coleta.get_residuos().size(); i++)
        data_line += coleta.toStringResiduosDaColeta(i) + "\n";

    data_access_residuos_coleta->update_output_file(data_line);

    data_access_residuos_coleta->close_output_file();
}

void DAOColeta::readResiduosDaColeta()
{
    data_access_residuos_coleta->open_input_file();

    data = data_access_residuos_coleta->read_data();
    convertToObject(data, false);

    // for (int i = 0; i < objects_coleta.size(); i++)
    //     objects_coleta[i].show();

    data_access_residuos_coleta->close_input_file();
}

void DAOColeta::convertToObject(std::vector<std::string> data, bool w)
{
    if (w)
    {
        objects_coleta.clear();
        readResiduosDaColeta();

        int id;
        std::string nome_doadora, nome_receptora, _data, endereco_coleta;
        bool status;

        int i = 0;
        while (i < data.size())
        {
            id = std::stoi(data[0 + i]);
            nome_doadora = data[1 + i];
            nome_receptora = data[2 + i];
            _data = data[3 + i];
            endereco_coleta = data[4 + i];

            Coleta object(id, nome_doadora, nome_receptora, _data, endereco_coleta, objects_residuos, status);
            objects_coleta.push_back(object);

            i += 6;
        }
    }
    else
    {
        objects_residuos.clear();

        int id_residuo;
        std::string nome;

        int i = 0;
        while (i < data.size())
        {
            id_residuo = std::stoi(data[1 + i]);
            nome = data[2 + i];

            Residuo object(id_residuo, nome);
            objects_residuos.push_back(object);

            i += 3;
        }
    }
}

void DAOColeta::cleanDataLine()
{
    data_line = "";
}