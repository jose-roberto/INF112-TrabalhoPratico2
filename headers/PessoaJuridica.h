#include "Pessoa.h"

class PessoaJuridica : public Pessoa
{
private:
    std::string cnpj;

public:
    PessoaJuridica(int id, std::string nome, std::string endereco, std::string email, std::string senha, int modalidade, std::string cnpj);

    std::string getCNPJ();
    void setCNPJ(std::string cnpj);

    std::string toString();
    void show();
};