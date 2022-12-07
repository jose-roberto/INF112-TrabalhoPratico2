#include "DataAccess.h"
#include "PessoaJuridica.h"

class DAOPessoaJuridica
{
private:
    DataAccess *data_access;
    std::string data_line;
    std::vector<std::string> data;
    std::vector<PessoaJuridica> objects;

public:
    DAOPessoaJuridica();                                        // construtor
    ~DAOPessoaJuridica();                                       // destrutor

    void createPessoaJuridica(PessoaJuridica pessoa_juridica);  // cria pessoa juridica
    void readPessoaJuridica(int id);                            // lê pessoa juridica
    void updatePessoaJuridica(PessoaJuridica pessoa_juridica);  // atualiza registro
    void deletePessoaJuridica(int id);                          // apaga pessoa juridica

    void convertToObject(std::vector<std::string> data);        // converte para objeto
    void cleanDataLine();                                       // apaga os dados da linha
};