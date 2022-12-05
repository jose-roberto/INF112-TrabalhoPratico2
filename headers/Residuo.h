#pragma once

#include <iostream>
class Residuo
{
private:
    int _id;
    std::string _nome;

public:
    Residuo(int id, std::string nome);

    int get_id();
    void set_id(int id);
    std::string get_nome();
    void set_nome(std::string nome);
    
    void show();

    virtual void armazenarResiduo();
};