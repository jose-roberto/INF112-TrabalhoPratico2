#include "../headers/PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(int id, std::string nome, std::string endereco, std::string email, std::string senha, int tipo, std::string cnpj) : Pessoa(id, nome, endereco, email, senha, tipo), cnpj(cnpj){};

std::string PessoaJuridica::getCNPJ()
{
    return this->cnpj;
}

void PessoaJuridica::setCNPJ(std::string cnpj)
{
    this->cnpj = cnpj;
}