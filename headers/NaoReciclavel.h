#include "Residuo.h"

class NaoReciclavel : public Residuo
{
public:
    void armazenarResiduo() override;  // sobreposição
};