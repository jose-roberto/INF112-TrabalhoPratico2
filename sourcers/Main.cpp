#include "../headers/DataAccess.h"

int main()
{
    std::string caminho_arquivo_entrada, caminho_arquivo_saida;

    caminho_arquivo_entrada = "../datasource/pessoa.txt";
    caminho_arquivo_saida = "../datasource/relatorio-coleta.txt";

    DataAccess data_source(caminho_arquivo_entrada, caminho_arquivo_saida);

    data_source.abrir_arquivo();
    data_source.fechar_arquivo();

    return 0;
}