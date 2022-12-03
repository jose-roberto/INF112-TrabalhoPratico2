#include "../headers/DataAccess.h"

DataAccess::DataAccess(std::string input_file_path, std::string output_file_path) : input_file_path(input_file_path), output_file_path(output_file_path){};

void DataAccess::open_input_file()
{
    input_file.open(input_file_path, std::ios::in);
    if (!input_file.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo de input_file!" << std::endl;
        exit(1);
    }
}

void DataAccess::open_output_file(bool mode)
{
    if (mode)
        output_file.open(output_file_path, std::ios::app);
    else
        output_file.open(output_file_path);

    if (!output_file.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo de saída!" << std::endl;
        exit(1);
    }
}

void DataAccess::update_output_file(std::string data)
{
    output_file << data;
}

std::vector<std::string> DataAccess::read_data()
{
    std::vector<std::string> data;
    std::string line, slice;

    while (1)
    {
        std::getline(input_file, line);

        // std::cout << line << std::endl;

        int j = 0;
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == '/')
            {
                int aux = i - j;
                slice = line.substr(j, aux);
                // std::cout << slice << std::endl;
                j = i + 1;

                data.push_back(slice);
            }
        }

        if (input_file.eof())
            break;
    }

    return data;
}

void DataAccess::close_input_file()
{
    input_file.close();
    if (input_file.is_open())
    {
        std::cerr << "Erro ao fechar o arquivo de input_file!" << std::endl;
        exit(1);
    }
}

void DataAccess::close_output_file()
{
    output_file.close();
    if (output_file.is_open())
    {
        std::cerr << "Erro ao fechar o arquivo de saída!" << std::endl;
        exit(1);
    }
}