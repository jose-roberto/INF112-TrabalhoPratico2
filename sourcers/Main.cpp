#include "../headers/DataAccess.h"
#include "../headers/DAOPessoaFisica.h"
#include "../headers/DAOPessoaJuridica.h"

int main()
{
    // DAOPessoaFisica dao_pessoa_fisica;
    // PessoaFisica pessoa_fisica1(1, "José", "Rua Dom João VI", "jose@gmail.com", "thiago", 0, "165");
    // PessoaFisica pessoa_fisica2(6, "Julio", "DPI", "julin@gmail.com", "minecraft", 1, "0110101001110101011011000110100101101111");

    // dao_pessoa_fisica.createPessoaFisica(pessoa_fisica2);
    // dao_pessoa_fisica.readPessoaFisica(pessoa_fisica1.getId());
    // pessoa_fisica1.setEmail("miss brasil 2000");
    // dao_pessoa_fisica.updatePessoaFisica(pessoa_fisica1);
    // dao_pessoa_fisica.readPessoaFisica(pessoa_fisica1.getId());
    // dao_pessoa_fisica.deletePessoaFisica(2);

    DAOPessoaJuridica dao_pessoa_juridica;
    PessoaJuridica pessoa_juridica1(1, "Firma 1", "Rua Collin Walcott", "firma1@gmail.com", "don", 1, "874");
    PessoaJuridica pessoa_juridica2(6, "Firma 6", "Rua John Coltrane", "firma6@gmail.com", "ilovesupreme", 0, "011");

    dao_pessoa_juridica.createPessoaJuridica(pessoa_juridica2);
    dao_pessoa_juridica.readPessoaJuridica(pessoa_juridica1.getId());
    pessoa_juridica1.setNome("tubarao");
    dao_pessoa_juridica.updatePessoaJuridica(pessoa_juridica1);
    dao_pessoa_juridica.readPessoaJuridica(pessoa_juridica1.getId());
    dao_pessoa_juridica.deletePessoaJuridica(3);

    return 0;
}