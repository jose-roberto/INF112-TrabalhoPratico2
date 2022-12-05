#include "../headers/DataAccess.h"
#include "../headers/DAOPessoaFisica.h"
#include "../headers/DAOPessoaJuridica.h"
#include "../headers/DAOResiduo.h"
#include "../headers/DAOPontoDeColeta.h"

int main()
{
    // DAOPessoaJuridica dao_pessoa_juridica;
    // PessoaJuridica pessoa_juridica1(1, "Firma 1", "Rua Collin Walcott", "firma1@gmail.com", "don", 1, "874");
    // PessoaJuridica pessoa_juridica2(6, "Firma 6", "Rua John Coltrane", "firma6@gmail.com", "ilovesupreme", 0, "011");

    // dao_pessoa_juridica.createPessoaJuridica(pessoa_juridica2);
    // dao_pessoa_juridica.readPessoaJuridica(pessoa_juridica1.getId());
    // pessoa_juridica1.setNome("tubarao");
    // dao_pessoa_juridica.updatePessoaJuridica(pessoa_juridica1);
    // dao_pessoa_juridica.readPessoaJuridica(pessoa_juridica1.getId());
    // dao_pessoa_juridica.deletePessoaJuridica(3);

    // DAOResiduo dao_residuo;

    // dao_residuo.readResiduo();

    DAOPontoDeColeta dao_ponto_de_coleta;
    PontoDeColeta ponto_de_coleta1(1, "Rua do José");
    PontoDeColeta ponto_de_coleta2(6, "Rua do Bairro");

    dao_ponto_de_coleta.createPontoDeColeta(ponto_de_coleta2);
    dao_ponto_de_coleta.readPontoDeColeta(ponto_de_coleta1.getId());
    ponto_de_coleta1.setEndereco("miss brasil 2000");
    dao_ponto_de_coleta.updatePontoDeColeta(ponto_de_coleta1);
    dao_ponto_de_coleta.readPontoDeColeta(ponto_de_coleta1.getId());
    dao_ponto_de_coleta.deletePontoDeColeta(5);

    return 0;
}