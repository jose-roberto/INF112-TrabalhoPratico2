#include "DataAccess.h"
#include "PontoDeColeta.h"

class DAOPontoDeColeta
{
private:
    DataAccess *data_access;
    std::string data_line;
    std::vector<std::string> data;
    std::vector<PontoDeColeta> objects;

public:
    DAOPontoDeColeta();
    ~DAOPontoDeColeta();

    void createPontoDeColeta(PontoDeColeta ponto_de_coleta);
    void readPontoDeColeta(int id);
    void updatePontoDeColeta(PontoDeColeta ponto_de_coleta);
    void deletePontoDeColeta(int id);

    void convertToObject(std::vector<std::string> data);
    void cleanDataLine();
};