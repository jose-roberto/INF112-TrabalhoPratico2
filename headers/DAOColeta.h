#include "DataAccess.h"
#include "Coleta.h"

class DAOColeta
{
private:
    DataAccess *data_access_coleta, *data_access_residuos_coleta;
    std::string data_line;
    std::vector<std::string> data;
    std::vector<Coleta> objects_coleta;
    std::vector<Residuo> objects_residuos;

public:
    DAOColeta();
    ~DAOColeta();

    void createColeta(Coleta coleta);
    void readColeta();
    void updateColeta(Coleta coleta);
    void deleteColeta(int id);

    void createResiduosDaColeta(Coleta coleta);
    void readResiduosDaColeta();

    void convertToObject(std::vector<std::string> data, bool w);
    void cleanDataLine();
};