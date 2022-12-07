#include "Pessoa.h"
class PessoaFisica : public Pessoa
{
private:
    std::string cpf;

public:
    PessoaFisica(int id, std::string nome, std::string endereco,
     std::string email, std::string senha, int modalidade, std::string cpf); // construtor

    std::string getCPF();           // retorna cpf
    void setCPF(std::string cpf);   // recebe cpf

    std::string toString();         // retorna o registro da pessoa física (transformando os atributos em string)
    void show();                    // exibe o registro
};