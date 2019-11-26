#include "doctest.h"

#include "../include/baralho.h"
#include "../include/carta.h"
#include "../include/excessao.h"
#include "../include/game.h"
#include "../include/logica.h"
#include "../include/mao.h"
#include "../include/mesa.h"
#include "../include/usual_card.h"

#include <string.h>
#include <iostream>
#include <math.h>

Baraho
Carta
Excessao
Game
Logica
Maos
Mesa
UsualCard

TEST_CASE ("01 - Teste construtor baralho"){
    CHECK_NOTHROW(Baralho baralho1(""));
    CHECK_NOTHROW(Baralho baralho2(""));
}

TEST_CASE ("02 - Teste getters e setters do baralho"){
    Baralho *baralho1 = new Baralho("");
    Baralho baralho2();
    Baralho *baralho3 = new Baralho("");

    CHECK(baralho1->get_QuatroDePaus()==QuatroDePaus);
    CHECK(baralho2->get_SeteDeCopas()==SeteDeCopas);
    CHECK(baralho3->get_AsDeEspadas()==AsDeEspadas);
    CHECK(baralho4->get_SeteDeOuross()==SeteDeOuros);

    baralho3->set_
    baralho3->set_
    baralho3->set_

    baralho2.set_
    baralhoo2.set_
    baralho2.set_

    CHECK()
    CHECK()
    CHECK()

    CHECK()
    CHECK()
    CHECK()
}

TEST_CASE("02 - Teste getters e setters Administrador"){

    //Setters
    Admin3->set_cpf("12345678");
    Admin3->set_nome("Roberto");
    Admin3->set_senha("jgg1234");

    Admin2.set_cpf("14067737602");
    Admin2.set_nome("Gabriel");
    Admin2.set_senha("14072000");

    CHECK(Admin3->get_cpf()=="12345678");
    CHECK(Admin3->get_nome()=="Roberto");
    CHECK(Admin3->get_senha()=="jgg1234");

    CHECK(Admin2.get_cpf()=="14067737602");
    CHECK(Admin2.get_nome()=="Gabriel");
    CHECK(Admin2.get_senha()=="14072000");
}
/*------------------------------------------------------------------------------------------------------------------------------------------------*/

/*----------------- Testes funcoes e construtores Gerente -------------------*/
//teste construtores
TEST_CASE("01 - Teste Construtores Gerente"){
    CHECK_NOTHROW(Gerente gerente1("Luis","0000000","1234567","12345","rua teste","31992312342"));
    CHECK_NOTHROW(Gerente gerente2("Luas", "14234533221", "mjs","122","rua teste 2","31993410213"));
}

//teste getters e setters
TEST_CASE("02 - Teste getters e setters Gerente"){
    Gerente *gerente1 = new Gerente("teste1","teste","123456789","1234","rua teste","31999999999");
    Gerente gerente2("teste2","teste","1234567","123456","rua teste2","3188888888");
    Gerente *gerente3 = new Gerente("teste3","teste","11111111111","1234","rua local","31993410214");

    //getters
    CHECK(gerente1->get_cpf() == "teste");
    CHECK(gerente2.get_cpf()== "teste");

    CHECK(gerente2.get_nome()== "teste2");
    CHECK(gerente3->get_nome()=="teste3");

    CHECK(gerente1->get_senha() == "123456789");
    CHECK(gerente2.get_senha()== "1234567");

    CHECK(gerente2.get_periodo_mandato()== "123456");
    CHECK(gerente3->get_periodo_mandato()=="1234");

    CHECK(gerente2.get_endereco()== "rua teste2");
    CHECK(gerente3->get_endereco()=="rua local");

    CHECK(gerente2.get_telefone()== "3188888888");
    CHECK(gerente3->get_telefone()=="31993410214");

    //setters
    gerente1->set_cpf("01234");
    gerente2.set_endereco("testeSet");
    gerente3->set_senha("{/*pause*/}");

    CHECK(gerente1->get_cpf()== "01234");
    CHECK(gerente2.get_endereco() == "testeSet");
    CHECK(gerente3->get_senha()=="{/*pause*/}");
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/

/*----------------- Teste Funcoes e construtor creche ---------------*/
TEST_CASE("01 - Teste Construtores"){
    CHECK_NOTHROW(Creche creche1("teste","1213545345","rua teste","ferwef "" fwefwe",3));
    CHECK_NOTHROW(Creche creche2("teste2","1241334","efwe^%^57","{qwdQ}",5));
}

TEST_CASE("02 - Teste getters e setters"){
    Creche creche1("teste","1213545345","rua teste","ferwef",3);
    Creche creche2("teste2","0000000","rua teste2","1231242",5);
    Creche *creche3 = new Creche("teste3","123456","rua creche","123456",100);

    //getters
    CHECK(creche1.get_endereco()=="rua teste");
    CHECK(creche1.get_nome()=="teste");
    CHECK(creche1.get_pos_gerente() == 3);

    CHECK(creche3->get_validade_convenio()=="123456");
    CHECK(creche3->get_telefone() == "123456");

    //setters

    creche3->set_nome("new name");
    creche2.set_telefone("1234567");
    creche1.set_validade_convenio("23/04/2000");

    CHECK(creche3->get_nome()=="new name");
    CHECK(creche2.get_telefone()=="1234567");
    CHECK(creche1.get_validade_convenio()=="23/04/2000");

}

/*--------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------- testando lista --------------------*/

TEST_CASE("01 - Teste inserir na lista e get_elemento e remover elemento"){
    Administrador admin1("teste1","1234567","1234567");
    Creche creche1("creche1","1234567","1234567","12312423",1);
    Gerente gerente1("gerente1","1234567","1234567","000","000","000");

    listaA.insere_admin(&admin1);
    listaG.insere_gerente(&gerente1);
    listaC.insere_creche(&creche1);

    CHECK(listaA.get_admin(0)->get_cpf() == "1234567");
    CHECK(listaC.get_creche(0)->get_nome() == "creche1");
    CHECK(listaG.get_gerente(0)->get_senha() == "1234567");

    admin1.set_cpf("0000000");
    gerente1.set_telefone("3199999999");
    creche1.set_validade_convenio("000000");

    CHECK(listaG.get_gerente(0)->get_telefone() == "3199999999");
    CHECK(listaC.get_creche(0)->get_validade_convenio() == "000000");
    CHECK(listaA.get_admin(0)->get_cpf() == "0000000");

    Administrador *admin2 = new Administrador();
    Creche *creche2 = new Creche("","","","",1);
    Gerente *gerente2 = new Gerente();

    creche2->set_nome("teste1");
    admin2->set_senha("123456");
    gerente2->set_periodo_mandato("31");

    listaA.insere_admin(admin2);
    listaC.insere_creche(creche2);
    listaG.insere_gerente(gerente2);

    CHECK(listaG.get_gerente(1)->get_periodo_mandato() == "31");
    CHECK(listaC.get_creche(1)->get_nome() == "teste1");
    CHECK(listaA.get_admin(1)->get_senha() == "123456");

    CHECK(listaG.numero_de_gerentes == 2);
    CHECK(listaA.numero_de_admins == 2);
    CHECK(listaC.numero_de_creches == 2);

    Administrador *admin3 = new Administrador();
    listaA.insere_admin(admin3);
    Creche *creche3 = new Creche("teste3","","","",3);
    listaC.insere_creche(creche3);

    listaG.remover_ultimo();
    listaC.remover_creche(1);

    CHECK(listaG.tamanho() == 1);
    CHECK(listaC.tamanho() == 2);
}
/*------------------------------------------------------------------------------------*/
