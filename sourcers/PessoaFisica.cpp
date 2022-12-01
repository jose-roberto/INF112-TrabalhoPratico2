#include "../headers/PessoaFisica.h"

PessoaFisica::PessoaFisica(int id, std::string nome, std::string endereco, std::string email, std::string senha, int tipo, std::string cpf) : Pessoa(id, nome, endereco, email, senha, tipo), cpf(cpf){};

std::string PessoaFisica::getCPF()
{
    return this->cpf;
}

void PessoaFisica::setCPF(std::string cpf)
{
    this->cpf = cpf;
}