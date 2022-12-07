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

public:
    Pessoa(int id, std::string nome,
     std::string endereco, std::string email, std::string senha, int modalidade);   // construtor

    int getId();                                // retorna id
    void setId(int id);                         // recebe id
    std::string getNome();                      // retorna nome
    void setNome(std::string nome);             // recebe nome
    std::string getEndereco();                  // retorna endereço
    void setEndereco(std::string endereco);     // recebe endereço
    std::string getEmail();                     // retorna email
    void setEmail(std::string email);           // recebe email
    std::string getSenha();                     // retorna a senha
    void setSenha(std::string senha);           // recebe a senha
    int getModalidade();                        // retorna a modalidade
    void setModalidade(int modalidade);         // recebe a modalidade
};