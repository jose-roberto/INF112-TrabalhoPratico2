#pragma once

#include <iostream>
class Residuo
{
private:
    int _id;
    std::string _nome;

public:
    Residuo(int id, std::string nome);  // construtor

    int get_id();                       // retorna o id
    void set_id(int id);                // recebe o id
    std::string get_nome();             // retorna o nome do residuo
    void set_nome(std::string nome);    // recebe o nome do residuo
    
    void show();                        // exibe o nome do residuo

    virtual void armazenarResiduo();
};