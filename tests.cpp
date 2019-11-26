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
Mao
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
    CHECK(baralho4->get_SeteDeOuros()==SeteDeOuros);

    baralho4.set_SeteDeOuros;
    baralho3.set_AsDeEspadas;
    baralho2.set_SeteDeCopas;
    baralho1.set_QuatroDePaus;

    CHECK(baralho4->get()=="SeteDeOuros");
    CHECK(baralho3->get()=="AsDeEspadas");
    CHECK(baralho2->get()=="SeteDeCopas");
    CHECK(baralho1->get()=="QuatroDePaus");
}



TEST_CASE ("01 - Teste construtor carta"){
    CHECK_NOTHROW(Carta carta1(""));
    CHECK_NOTHROW(Carta carta2(""));
}

TEST_CASE ("02 - Teste getters e setters da carta"){
    Carta *carta1 = new Carta("");
    Carta carta2();
    Carta *carta3 = new Carta("");

    CHECK(carta1->get_Paus()== Paus);
    CHECK(carta2->get_Copas()== Copas);
    CHECK(carta3->get_Espadas()== Espadas);
    CHECK(carta4->get_Ouros()== Ouros);

    carta4.set_Ouros;
    carta3.set_Espadas;
    carta2.set_Copas;
    carta1.set_Paus;

    CHECK(carta4->get()=="Ouros");
    CHECK(carta3->get()=="Espadas");
    CHECK(carta2->get()=="Copas");
    CHECK(carta1->get()=="Paus");
}
