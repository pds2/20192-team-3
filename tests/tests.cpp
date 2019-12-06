#include "../third_party/doctest.h"
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

TEST_CASE ("01 - Teste do game"){
    Game *game1 = new Game();
    Game *game2 = new Game();

    game1->setPontos(4);
    game2->setPontos(8);

    CHECK(game1->getPontos()== 4);
    CHECK(game2->getPontos()== 8);

    game1->aumentarPontos();

    CHECK(game1->getPontos()== 8);
    CHECK(game2->getPontos()== 8);
}

TEST_CASE ("02 - Teste getters da carta"){
    UsualCard *carta1 = new UsualCard(QuatroDePaus, Paus);
    UsualCard *carta2 = new UsualCard(SeteDeCopas, Copas);
    UsualCard *carta3 = new UsualCard(Dois, Ouros);

    CHECK(carta1->get_naipe()== Paus);
    CHECK(carta2->get_naipe()== Copas);
    CHECK(carta3->get_naipe()== Ouros);
}