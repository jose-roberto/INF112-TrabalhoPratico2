#include <fstream>

int main()
{
    std::ifstream fin;
    std::ofstream fout;

    fin.open("../datasource/datasource.txt");
    fout.open("../out/relatorio-coleta.txt");

    std::string test;
    std::getline(fin, test);

    test += " Seus dados foram carregados e estão sendo alterados!";

    fout << test;

    fin.close();
    fout.close();

    return 0;
}