#include "../headers/Coleta.h"

Coleta::Coleta(int id, int tipo, PontoDeColeta ponto_de_coleta, bool status) : id(id), tipo(tipo), ponto_de_coleta(ponto_de_coleta), status(status){};

int Coleta::get_id(){
    return this -> id;
}

int Coleta::get_tipo(){
    return this -> tipo;
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

void Coleta::set_tipo(int tipo){
    this -> tipo = tipo;
}

void Coleta::set_ponto_de_coleta(PontoDeColeta ponto_de_coleta){
    this -> ponto_de_coleta = ponto_de_coleta;
}

void Coleta::set_status(bool status){
    this -> status = status;
}