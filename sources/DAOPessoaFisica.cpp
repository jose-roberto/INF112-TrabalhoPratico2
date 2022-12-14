#include "../headers/DAOPessoaFisica.h"

DAOPessoaFisica::DAOPessoaFisica()
{
    data_access = new DataAccess("../datasource/pessoa-fisica.txt", "../datasource/pessoa-fisica.txt");
    data_line = "";
}
DAOPessoaFisica::~DAOPessoaFisica()
{
    delete data_access;
}

void DAOPessoaFisica::createPessoaFisica(PessoaFisica pessoa_fisica)
{
    data_access->open_output_file(true);

    cleanDataLine();
    if (pessoa_fisica.getId() != 1)
        data_line = "\n";

    data_line += pessoa_fisica.toString();

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPessoaFisica::readPessoaFisica(int id)
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

void DAOPessoaFisica::updatePessoaFisica(PessoaFisica pessoa_fisica)
{
    data_access->open_output_file(false);

    for (int i = 0; i < objects.size(); i++)
        if (objects[i].getId() == pessoa_fisica.getId())
        {
            objects[i].setNome(pessoa_fisica.getNome());
            objects[i].setEndereco(pessoa_fisica.getEndereco());
            objects[i].setEmail(pessoa_fisica.getEmail());
            objects[i].setSenha(pessoa_fisica.getSenha());
            objects[i].setModalidade(pessoa_fisica.getModalidade());
            objects[i].setCPF(pessoa_fisica.getCPF());

            break;
        }

    cleanDataLine();
    for (int i = 0; i < objects.size(); i++)
        data_line += objects[i].toString() + ((i < objects.size() - 1) ? "\n" : "");

    data_access->update_output_file(data_line);

    data_access->close_output_file();
}

void DAOPessoaFisica::deletePessoaFisica(int id)
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

void DAOPessoaFisica::convertToObject(std::vector<std::string> data)
{
    objects.clear();

    int id;
    std::string nome, endereco, email, senha, cpf;
    int modalidade;

    int i = 0;
    while (i < data.size())
    {
        id = std::stoi(data[0 + i]);
        nome = data[1 + i];
        endereco = data[2 + i];
        email = data[3 + i];
        senha = data[4 + i];
        modalidade = std::stoi(data[5 + i]);
        cpf = data[6 + i];

        PessoaFisica object(id, nome, endereco, email, senha, modalidade, cpf);
        objects.push_back(object);

        i += 7;
    }
}

void DAOPessoaFisica::cleanDataLine()
{
    data_line = "";
}