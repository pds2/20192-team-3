#ifndef "JOGADOR_H"
#define "JOGADOR_H"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<"carta.h">
#include<"baralho.h">
#include<"dupla.h">
#include<string>

class Jogador{
    public: 
        Jogador();
        void votar_truco();
        void votar_seis();
        void votar_nove();
        void votar_doze();
        void jogar_carta();
        void cortar_baralho();
        void queimar_mao();
        void mao;     
};

#endif

