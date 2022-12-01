#include "../headers/DataSource.h"

DataSource::DataSource(std::string caminho_arquivo_entrada, std::string caminho_arquivo_saida) : caminho_arquivo_entrada(caminho_arquivo_entrada), caminho_arquivo_saida(caminho_arquivo_saida){};

void DataSource::abrir_arquivo()
{
    arquivo_entrada.open(caminho_arquivo_entrada, std::ios::in);
    if (!arquivo_entrada.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo de arquivo_entrada!" << std::endl;
        exit(1);
    }

    arquivo_saida.open(caminho_arquivo_saida);
    if (!arquivo_saida.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo de saída!" << std::endl;
        exit(1);
    }
}

void DataSource::fechar_arquivo()
{
    arquivo_entrada.close();
    if (arquivo_entrada.is_open())
    {
        std::cerr << "Erro ao fechar o arquivo de arquivo_entrada!" << std::endl;
        exit(1);
    }

    arquivo_saida.close();
    if (arquivo_saida.is_open())
    {
        std::cerr << "Erro ao fechar o arquivo de saída!" << std::endl;
        exit(1);
    }
}