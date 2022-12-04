#include "../headers/Coleta.h"

Coleta::Coleta(int id, int modalidade, PontoDeColeta ponto_de_coleta, bool status) : id(id), modalidade(modalidade), ponto_de_coleta(ponto_de_coleta), status(status){};

int Coleta::get_id(){
    return this -> id;
}

int Coleta::get_modalidade(){
    return this -> modalidade;
}

PontoDeColeta Coleta::get_ponto_de_coleta(){
    return this -> ponto_de_coleta;
}

bool Coleta::get_status(){
    return this -> status;
}

void Coleta::set_id(int id){
    this -> id = id;
}

void Coleta::set_modalidade(int modalidade){
    this -> modalidade = modalidade;
}

void Coleta::set_ponto_de_coleta(PontoDeColeta ponto_de_coleta){
    this -> ponto_de_coleta = ponto_de_coleta;
}

void Coleta::set_status(bool status){
    this -> status = status;
}