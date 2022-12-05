#pragma once

#include "Residuo.h"
#include <iostream>
#include <vector>

class Pessoa
{
private:
    int id;
    std::string nome, endereco, email, senha;
    int modalidade;
    std::vector<Residuo> residuos;

public:
    Pessoa(int id, std::string nome, std::string endereco, std::string email, std::string senha, int modalidade);

    int getId();
    void setId(int id);
    std::string getNome();
    void setNome(std::string nome);
    std::string getEndereco();
    void setEndereco(std::string endereco);
    std::string getEmail();
    void setEmail(std::string email);
    std::string getSenha();
    void setSenha(std::string senha);
    int getModalidade();
    void setModalidade(int modalidade);
    std::vector<Residuo> getResiduos();
    void setResiduos(std::vector<Residuo> residuos);
};