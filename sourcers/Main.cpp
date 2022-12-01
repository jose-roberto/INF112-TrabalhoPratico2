#include "../headers/DataAccess.h"

int main()
{
    std::string input_file_path, output_file_path;

    input_file_path = "../datasource/pessoa.txt";
    output_file_path = "../datasource/relatorio-coleta.txt";

    DataAccess data_source(input_file_path, output_file_path);

    data_source.open_input_file();
    data_source.open_output_file();

    data_source.close_input_file();
    data_source.close_output_file();

    return 0;
}