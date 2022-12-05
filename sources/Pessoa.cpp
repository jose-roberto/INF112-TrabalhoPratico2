#include "../headers/Pessoa.h"

Pessoa::Pessoa(int id, std::string nome, std::string endereco, std::string email, std::string senha, int modalidade) : id(id), nome(nome), endereco(endereco), email(email), senha(senha), modalidade(modalidade){};

int Pessoa::getId()
{
    return this->id;
}

void Pessoa::setId(int id)
{
    this->id = id;
}

std::string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Pessoa::getEndereco()
{
    return this->endereco;
}

void Pessoa::setEndereco(std::string endereco)
{
    this->endereco = endereco;
}

std::string Pessoa::getEmail()
{
    return this->email;
}

void Pessoa::setEmail(std::string email)
{
    this->email = email;
}

std::string Pessoa::getSenha()
{
    return this->senha;
}

void Pessoa::setSenha(std::string senha)
{
    this->senha = senha;
}

int Pessoa::getModalidade()
{
    return this->modalidade;
}

void Pessoa::setModalidade(int modalidade)
{
    this->modalidade = modalidade;
}

std::vector<Residuo> Pessoa::getResiduos()
{
    return this->residuos;
}

void Pessoa::setResiduos(std::vector<Residuo> residuos)
{
    this->residuos = residuos;
}
