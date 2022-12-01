#include <fstream>
#include <iostream>

class DataAccess
{
private:
    std::string input_file_path, output_file_path;
    std::ifstream input_file;
    std::ofstream output_file;

public:
    DataAccess(std::string input_file_path, std::string output_file_path);

    void open_input_file();
    void open_output_file();
    void close_input_file();
    void close_output_file();
};