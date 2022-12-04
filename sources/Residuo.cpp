#include "../headers/Residuo.h"

Residuo::Residuo(int id, std::string nome) : _id(id), _nome(nome){};

int Residuo::get_id(){
    return this -> _id;
}

std::string Residuo::get_nome(){
    return this ->_nome;
}

void Residuo::set_id(int id){
    this -> _id = id;
}

void Residuo::set_nome(std::string nome){
    this -> _nome = nome;
}

void Residuo::armazenarResiduo(){}