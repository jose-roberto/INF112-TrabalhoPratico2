#include "Pessoa.h"

class PessoaJuridica : public Pessoa
{
private:
    std::string cnpj;

public:
    PessoaJuridica(int id, std::string nome, std::string endereco,
     std::string email, std::string senha, int modalidade, std::string cnpj);   // construtor

    std::string getCNPJ();              // retorna cnpj
    void setCNPJ(std::string cnpj);     // recebe cnpj

    std::string toString();             // retorna o registro como string
    void show();                        // exibe o registro
};