#pragma once

#include <iostream>

class Pessoa
{
private:
    int id;
    std::string nome, endereco, email, senha;
    int modalidade;

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
};