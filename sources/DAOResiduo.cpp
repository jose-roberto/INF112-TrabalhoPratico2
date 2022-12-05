#include "../headers/DAOResiduo.h"

DAOResiduo::DAOResiduo()
{
    data_access = new DataAccess("../datasource/residuo.txt", "../datasource/residuo.txt");
    data_line = "";
}
DAOResiduo::~DAOResiduo()
{
    delete data_access;
}

void DAOResiduo::readResiduo()
{
    data_access->open_input_file();

    data = data_access->read_data();
    convertToObject(data);

    for (int i = 0; i < objects.size(); i++)
        objects[i].show();

    data_access->close_input_file();
}

void DAOResiduo::convertToObject(std::vector<std::string> data)
{
    objects.clear();

    int id;
    std::string nome;

    int i = 0;
    while (i < data.size())
    {
        id = std::stoi(data[0 + i]);
        nome = data[1 + i];

        Residuo object(id, nome);
        objects.push_back(object);

        i += 2;
    }
}