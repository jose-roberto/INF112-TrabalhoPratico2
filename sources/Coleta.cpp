#include "../headers/Coleta.h"

Coleta::Coleta(int id, std::string nome_doadora, std::string nome_receptora, std::string data, std::string endereco_coleta, std::vector<Residuo> residuos, bool status) : id(id), nome_doadora(nome_doadora), nome_receptora(nome_receptora), data(data), endereco_coleta(endereco_coleta), residuos(residuos), status(status){};

int Coleta::get_id()
{
    return this->id;
}

std::string Coleta::get_nome_doadora()
{
    return this->nome_doadora;
}

std::string Coleta::get_nome_receptora()
{
    return this->nome_receptora;
}

std::string Coleta::get_data()
{
    return this->data;
}

std::string Coleta::get_endereco_coleta()
{
    return this->endereco_coleta;
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

void Coleta::set_nome_doadora(std::string nome_doadora)
{
    this->nome_doadora = nome_doadora;
}

void Coleta::set_nome_receptora(std::string nome_receptora)
{
    this->nome_receptora = nome_receptora;
}

void Coleta::set_data(std::string data)
{
    this->data = data;
}

void Coleta::set_endereco_coleta(std::string endereco_coleta)
{
    this->endereco_coleta = endereco_coleta;
}

void Coleta::set_residuos(std::vector<Residuo> residuos)
{
    this->residuos = residuos;
}

void Coleta::set_status(bool status)
{
    this->status = status;
}

void Coleta::show()
{
    std::cout << "Doadora: " << this->nome_doadora << "\nReceptora: " << this->nome_receptora << "\nData: " << data << "\nEndereço da Coleta: " << this->endereco_coleta << "\nStatus: " << (this->get_status() == 0 ? "Efetuda" : "Não Efetuda") << std::endl;
}

std::string Coleta::toStringColeta()
{
    return std::to_string(this->get_id()) + "/" + this->nome_doadora + "/" + this->nome_receptora + "/" + this->get_data() + "/" + this->endereco_coleta + "/" + std::to_string(this->get_status()) + "/";
}

std::string Coleta::toStringResiduosDaColeta(int i)
{
    return std::to_string(this->get_id()) + "/" + std::to_string(this->residuos[i].get_id()) + "/" + this->residuos[i].get_nome() + "/";
}