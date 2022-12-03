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
    DAOPessoaJuridica();
    ~DAOPessoaJuridica();

    void createPessoaJuridica(PessoaJuridica pessoa_juridica);
    void readPessoaJuridica(int id);
    void updatePessoaJuridica(PessoaJuridica pessoa_juridica);
    void deletePessoaJuridica(int id);
    
    void convertToObject(std::vector<std::string> data);
    void cleanDataLine();
};