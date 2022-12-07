#pragma once

#include <fstream>
#include <iostream>
#include <vector>
class DataAccess
{
private:
    std::string input_file_path, output_file_path;
    std::ifstream input_file;
    std::ofstream output_file;

public:
    DataAccess(std::string input_file_path, std::string output_file_path);  // construtor

    void open_input_file();                     // abre o arquivo de entrada
    void open_output_file(bool mode);           // abre o arquivo de saida
    void update_output_file(std::string data);  // atualiza o arquivo de saida
    std::vector<std::string> read_data();       // lê arquivo
    void close_input_file();                    // fecha arquivo de entrada
    void close_output_file();                   // fecha arquivo de saida
};