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

void PessoaJuridica::show()
{
    std::cout << "CNPJ: " << this->cnpj << "\nNome: " << this->getNome() << "\nEndereço: " << this->getEndereco() << "\nEmail: " << this->getEmail() << "\nSenha: " << this->getSenha() << "\nTipo: " << (this->getTipo() == 0 ? "Doador" : "Receptor") << std::endl;
}

std::string PessoaJuridica::toString()
{
    return std::to_string(this->getId()) + "/" + this->getNome() + "/" + this->getEndereco() + "/" + this->getEmail() + "/" + this->getSenha() + "/" + std::to_string(this->getTipo()) + "/" + this->getCNPJ() + "/";
}