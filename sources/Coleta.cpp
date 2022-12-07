#include "../headers/Coleta.h"

Coleta::Coleta(int id, int id_doador, int id_receptor, int data, PontoDeColeta ponto_de_coleta, std::vector<Residuo> residuos, bool status) : id(id), id_doador(id_doador), id_receptor(id_receptor), data(data), ponto_de_coleta(ponto_de_coleta), residuos(residuos), status(status){};

int Coleta::get_id()
{
    return this->id;
}

int Coleta::get_id_doador()
{
    return this->id_doador;
}

int Coleta::get_id_receptor()
{
    return this->id_receptor;
}

int Coleta::get_data()
{
    return this->data;
}

PontoDeColeta Coleta::get_ponto_de_coleta()
{
    return this->ponto_de_coleta;
}

std::vector<Residuo> Coleta::get_residuos()
{
    return this->residuos;
}

bool Coleta::get_status()
{
    return this->status;
}

void Coleta::set_id(int id)
{
    this->id = id;
}

void Coleta::set_id_doador(int id_doador)
{
    this->id_doador = id_doador;
}

void Coleta::set_id_receptor(int id_receptor)
{
    this->id_receptor = id_receptor;
}

void Coleta::set_data(int data)
{
    this->data = data;
}

void Coleta::set_ponto_de_coleta(PontoDeColeta ponto_de_coleta)
{
    this->ponto_de_coleta = ponto_de_coleta;
}

void Coleta::set_residuos(std::vector<Residuo> residuos)
{
    this->residuos = residuos;
}

void Coleta::set_status(bool status)
{
    this->status = status;
}