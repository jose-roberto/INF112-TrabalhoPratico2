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
    DAOPontoDeColeta();                 // construtor
    ~DAOPontoDeColeta();                // destrutor

    void createPontoDeColeta(PontoDeColeta ponto_de_coleta);        // cria ponto de coleta    
    void readPontoDeColeta(int id);                                 // lê ponto de coleta
    void updatePontoDeColeta(PontoDeColeta ponto_de_coleta);        // atualiza ponto de coleta
    void deletePontoDeColeta(int id);                               // apaga ponto de coleta

    void convertToObject(std::vector<std::string> data);            // converte para objeto
    void cleanDataLine();                                           // apaga dados da linha
};