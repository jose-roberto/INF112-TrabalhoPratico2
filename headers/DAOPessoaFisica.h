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
    DAOPessoaFisica();
    ~DAOPessoaFisica();

    void createPessoaFisica(PessoaFisica pessoa_fisica);
    void readPessoaFisica(int id);
    void updatePessoaFisica(PessoaFisica pessoa_fisica);
    void deletePessoaFisica(int id);
    
    void convertToObject(std::vector<std::string> data);
    void cleanDataLine();
};