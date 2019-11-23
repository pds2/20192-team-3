#ifndef "HAND.H"
#define "HAND.H"

#include <vector>
#include "carta.h"
#include "baralho.h"
#include "mesa.h"

#define TAMANHO_MAO 3

class Mao {
    private:
        std::vector<Carta*> mao;
    public:
        Mao(Baralho* baralho);
        ~Mao();
        void mostrar_mao(); //mostrar mao
        Carta* descartar(int carta_pos); //Descartar
        void descartar_mao(Mesa *mesa); //Descartar mao na mesa 
        int tamanho_mao();
};

#endif
