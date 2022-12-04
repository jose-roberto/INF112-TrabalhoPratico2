#include "../headers/PontoDeColeta.h"

PontoDeColeta::PontoDeColeta(int id, std::string endereco) : id(id), endereco(endereco){};

int PontoDeColeta::getId()
{
    return this->id;
}

void PontoDeColeta::setId(int id)
{
    this->id = id;
}

std::string PontoDeColeta::getEndereco()
{
    return this->endereco;
}

void PontoDeColeta::setEndereco(std::string endereco)
{
    this->endereco = endereco;
}