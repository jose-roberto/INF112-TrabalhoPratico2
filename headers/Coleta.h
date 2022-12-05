#include "PontoDeColeta.h"
#include "Residuo.h"

#include <vector>

class Coleta
{
private:
    int id, id_doador, id_receptor, data;
    PontoDeColeta ponto_de_coleta;
    std::vector<Residuo> residuos;
    bool status;

public:
    Coleta(int id, int id_doador, int id_receptor, int data, PontoDeColeta ponto_de_coleta, std::vector<Residuo> residuos, bool status);

    int get_id();
    int get_id_doador();
    int get_id_receptor();
    int get_data();
    PontoDeColeta get_ponto_de_coleta();
    std::vector<Residuo> get_residuos();
    bool get_status();
    void set_id(int id);
    void set_id_doador(int id_doador);
    void set_id_receptor(int id_receptor);
    void set_data(int data);
    void set_ponto_de_coleta(PontoDeColeta ponto_de_coleta);
    void set_residuos(std::vector<Residuo> residuos);
    void set_status(bool status);
};