#pragma once

#include <iostream>

class PontoDeColeta
{
private:
    int id;
    std::string endereco;

public:
    PontoDeColeta(int id, std::string endereco);

    int getId();
    void setId(int id);
    std::string getEndereco();
    void setEndereco(std::string endereco);

    std::string toString();
    void show();
};