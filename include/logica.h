#ifndef _LOGICA_H
#define _LOGICA_H

#include <iostream>
#include "carta.h"
#include "mao.h"
#include "mesa.h"
#include "excessao.h"

class Logica{
    private: 
        int cartaEscolhida;
        int maiorCarta;
        int timePrimeira;
        int timeVenc;
        int placar[2];

    public:
        Logica();
        void controleRodada(Baralho *baralho, Mao maoJogador, Mao ia1Mao, Mao ia2Mao, Mao ia3Mao);
        int testeRodada (int i);
        void checkOponenteVenc (Carta *selecionadaCarta);
        void checkSeuVenc(Carta *selecionadaCarta);
        int testeMaoVenc();
        void limparMao();
        int getTimeVenc();
};

#endif
