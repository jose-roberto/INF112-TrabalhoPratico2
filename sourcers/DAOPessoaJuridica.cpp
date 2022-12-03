#include "../headers/DAOPessoaJuridica.h"

DAOPessoaJuridica::DAOPessoaJuridica()
{
    data_access = new DataAccess("../datasource/pessoa-juridica.txt", "../datasource/pessoa-juridica.txt");
    data_line = "";
}
DAOPessoaJuridica::~DAOPessoaJuridica()
{
    delete data_access;
}

void DAOPessoaJuridica::createPessoaJuridica(PessoaJuridica pessoa_juridica)
{
    data_access->open_output_file(true);

    cleanDataLine();
    data_line = "\n" + std::to_string(pessoa_juridica.getId()) + "/" + pessoa_juridica.getNome() + "/" + pessoa_juridica.getEndereco() + "/" + pessoa_juridica.getEmail() + "/" + pessoa_juridica.getSenha() + "/" + std::to_string(pessoa_juridica.getTipo()) + "/" + pessoa_juridica.getCNPJ() + "/";

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPessoaJuridica::readPessoaJuridica(int id)
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

void DAOPessoaJuridica::updatePessoaJuridica(PessoaJuridica pessoa_juridica)
{
    data_access->open_output_file(false);

    for (int i = 0; i < objects.size(); i++)
        if (objects[i].getId() == pessoa_juridica.getId())
        {
            objects[i].setNome(pessoa_juridica.getNome());
            objects[i].setEndereco(pessoa_juridica.getEndereco());
            objects[i].setEmail(pessoa_juridica.getEmail());
            objects[i].setSenha(pessoa_juridica.getSenha());
            objects[i].setTipo(pessoa_juridica.getTipo());
            objects[i].setCNPJ(pessoa_juridica.getCNPJ());

            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects.size(); i++)
        data_line += objects[i].toString() + ((i < objects.size() - 1) ? "\n" : "");

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPessoaJuridica::deletePessoaJuridica(int id)
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

void DAOPessoaJuridica::convertToObject(std::vector<std::string> data)
{
    objects.clear();

    int id;
    std::string nome, endereco, email, senha, cnpj;
    int tipo;

    int i = 0;
    while (i < data.size())
    {
        id = std::stoi(data[0 + i]);
        nome = data[1 + i];
        endereco = data[2 + i];
        email = data[3 + i];
        senha = data[4 + i];
        tipo = std::stoi(data[5 + i]);
        cnpj = data[6 + i];

        PessoaJuridica object(id, nome, endereco, email, senha, tipo, cnpj);
        objects.push_back(object);

        i += 7;
    }
}

void DAOPessoaJuridica::cleanDataLine()
{
    data_line = "";
}