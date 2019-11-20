#ifndef "DUPLA_H"
#define "DUPLA_H"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<"jogador.h">
#include<string>

class Dupla{
    public: 
        Dupla();
        void pedir_truco();
        void pedir_seis();
        void pedir_nove();
        void pedir_doze();
        void vitoria();
        void derrota();
};

#endif

