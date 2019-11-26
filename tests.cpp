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
