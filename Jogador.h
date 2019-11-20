#ifndef "JOGADOR_H"
#define "JOGADOR_H"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<"carta.h>
#include<"baralho.h>
#include<"dupla.h>
#include<string>

class Jogador{
    public: 
        Jogador();
        votar_truco();
        void votar_seis();
        void votar_nove();
        votar_doze();
        jogar_carta();
        void cortar_baralho();
        void queimar_mao();
        void mao; 
        
};

#endif

