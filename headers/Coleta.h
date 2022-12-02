#include "PontoDeColeta.h"

class Coleta {
    private:
        int id;
        int tipo;
        PontoDeColeta ponto_de_coleta;
        bool status;
    public:
        Coleta(int id, int tipo, PontoDeColeta ponto_de_coleta, bool status);

        int get_id();
        int get_tipo();
        PontoDeColeta get_ponto_de_coleta();
        bool get_status();
        void set_id(int id);
        void set_tipo(int tipo);
        void set_ponto_de_coleta(PontoDeColeta ponto_de_coleta);
        void set_status(bool status);
};