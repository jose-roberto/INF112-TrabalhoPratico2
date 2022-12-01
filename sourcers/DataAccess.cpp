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

void DataAccess::open_output_file()
{
    output_file.open(output_file_path);
    if (!output_file.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo de saída!" << std::endl;
        exit(1);
    }
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