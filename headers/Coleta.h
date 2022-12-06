#include "Residuo.h"

#include <vector>

class Coleta
{
private:
    int id;
    std::string nome_doadora, nome_receptora, data, endereco_coleta;
    std::vector<Residuo> residuos;
    bool status;

public:
    Coleta(int id, std::string nome_doadora, std::string nome_receptora, std::string data, std::string endereco_coleta, std::vector<Residuo> residuos, bool status);

    int get_id();
    std::string get_nome_doadora();
    std::string get_nome_receptora();
    std::string get_data();
    std::string get_endereco_coleta();
    std::vector<Residuo> get_residuos();
    bool get_status();
    void set_id(int id);
    void set_nome_doadora(std::string nome_doadora);
    void set_nome_receptora(std::string nome_receptora);
    void set_data(std::string data);
    void set_endereco_coleta(std::string endereco_coleta);
    void set_residuos(std::vector<Residuo> residuos);
    void set_status(bool status);

    std::string toStringColeta();
    std::string toStringResiduosDaColeta(int i);
    void show();
};