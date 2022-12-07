#include "DataAccess.h"
#include "PessoaFisica.h"

class DAOPessoaFisica
{
private:
    DataAccess *data_access;
    std::string data_line;
    std::vector<std::string> data;
    std::vector<PessoaFisica> objects;

public:
    DAOPessoaFisica();            // construtor
    ~DAOPessoaFisica();           // destrutor

    void createPessoaFisica(PessoaFisica pessoa_fisica);    // cria pessoa fisica
    void readPessoaFisica(int id);                          // lê registro
    void updatePessoaFisica(PessoaFisica pessoa_fisica);    // atualiza registro
    void deletePessoaFisica(int id);                        // exclui registro
    
    void convertToObject(std::vector<std::string> data);    // converte para objeto
    void cleanDataLine();                                   // apaga os dados da linha
};