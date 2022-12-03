#include "Pessoa.h"
class PessoaFisica : public Pessoa
{
private:
    std::string cpf;

public:
    PessoaFisica(int id, std::string nome, std::string endereco, std::string email, std::string senha, int tipo, std::string cpf);

    std::string getCPF();
    void setCPF(std::string cpf);

    std::string toString();
    void show();
};