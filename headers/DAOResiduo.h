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
    DAOResiduo();
    ~DAOResiduo();

    void readResiduo();

    void convertToObject(std::vector<std::string> data);
};