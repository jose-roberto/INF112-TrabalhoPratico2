#include "../headers/DataAccess.h"
#include "../headers/DAOPessoaFisica.h"

int main()
{
    DAOPessoaFisica dao_pessoa_fisica;
    PessoaFisica pessoa_fisica(1, "José", "Rua Dom João VI", "jose@gmail.com", "thiago", 0, "165");

    // PessoaJuridica pessoa_juridica(2, "Firma", "Travessa 2", "firma@", "Dced", 1, "00145");

    //dao_pessoa_fisica.createPessoaFisica(pessoa_fisica);
    dao_pessoa_fisica.readPessoaFisica(pessoa_fisica.getId());
    pessoa_fisica.setEmail("miss brasil 2000");
    dao_pessoa_fisica.updatePessoaFisica(pessoa_fisica);
    dao_pessoa_fisica.readPessoaFisica(pessoa_fisica.getId());
    dao_pessoa_fisica.deletePessoaFisica(2);

    return 0;
}