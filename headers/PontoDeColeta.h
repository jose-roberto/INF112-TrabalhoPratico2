#pragma once

#include <iostream>

class PontoDeColeta
{
private:
    int id;
    std::string endereco;

public:
    PontoDeColeta(int id, std::string endereco);    // construtor

    int getId();                                    // retorna id
    void setId(int id);                             // recebe id
    std::string getEndereco();                      // retorna endereço
    void setEndereco(std::string endereco);         // recebe endereço

    std::string toString();                         // retorna o registro de coleta
    void show();                                    // exibe o ponto de coleta
};