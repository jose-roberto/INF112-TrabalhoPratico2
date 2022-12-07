#include "DataAccess.h"
#include "Residuo.h"

class DAOResiduo
{
private:
    DataAccess *data_access;
    std::string data_line;
    std::vector<std::string> data;
    std::vector<Residuo> objects;

public:
    DAOResiduo();               // construtor
    ~DAOResiduo();              // destrutor

    void readResiduo();         // lê residuo

    void convertToObject(std::vector<std::string> data);  // converte para objeto
};