#ifndef _BARALHO_H
#define _BARALHO_H

#include "carta.h"
#include "usual_card.h"
#include <vector>

class Baralho {
    private:
        std::vector<Carta*> baralho;
    public:
        Baralho(); //Construtor
        ~Baralho(); //Destrutor
        void embaralhar(); 
        void mostrar_Baralho(); //cartas do baralho todo
        Carta* pegar_carta(); //pega uma carta do topo 
        void inserir_carta(Carta* carta); //por carta no baralho 
};

#endif
