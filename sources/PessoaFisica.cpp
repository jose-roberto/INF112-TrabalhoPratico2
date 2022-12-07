#include "../headers/PessoaFisica.h"

PessoaFisica::PessoaFisica(int id, std::string nome, std::string endereco, std::string email, std::string senha, int modalidade, std::string cpf) : Pessoa(id, nome, endereco, email, senha, modalidade), cpf(cpf){};

std::string PessoaFisica::getCPF()
{
    return this->cpf;
}

void PessoaFisica::setCPF(std::string cpf)
{
    this->cpf = cpf;
}

void PessoaFisica::show()
{
    std::cout << "CPF: " << this->cpf << "\nNome: " << this->getNome() << "\nEndereço: " << this->getEndereco() << "\nEmail: " << this->getEmail() << "\nSenha: " << this->getSenha() << "\nModalidade: " << (this->getModalidade() == 0 ? "Doador" : "Receptor") << std::endl;
}

std::string PessoaFisica::toString()
{
    return std::to_string(this->getId()) + "/" + this->getNome() + "/" + this->getEndereco() + "/" + this->getEmail() + "/" + this->getSenha() + "/" + std::to_string(this->getModalidade()) + "/" + this->getCPF() + "/";
}