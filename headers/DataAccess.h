#include <fstream>
#include <iostream>

class DataAccess
{
private:
    std::string caminho_arquivo_entrada, caminho_arquivo_saida;
    std::ifstream arquivo_entrada;
    std::ofstream arquivo_saida;

public:
    DataAccess(std::string caminho_arquivo_entrada, std::string caminho_arquivo_saida);

    void abrir_arquivo();
    void fechar_arquivo();
};