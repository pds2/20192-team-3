#ifndef "BARALHO.H"
#define "BARALHO.H"

#include "carta.h"

class Baralho {
    private:
        std::vector<Carta*> baralho;
    public:
        Baralho(); //Constructor
        ~Baralho(); //Destructor
        void embaralhar(); //Shuffle the cards of deck
        void mostrar_baralho(); //Print all the cards in deck
        Carta* pegar_carta(); //Draw one card from the top of the deck
        void inserir_carta(Carta* carta); //Put one card in the deck
};

#endif
