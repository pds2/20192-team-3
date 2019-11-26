#ifndef _USUAL_CARD_H
#define _USUAL_CARD_H

#include "carta.h"

enum Naipes {
    Paus = 1,
    Copas,
    Espadas,
    Ouros
};

class UsualCard : public Carta {
    private:
        Naipes _naipe;
    public:
        UsualCard(Valor valor, Naipes naipe); //Construtor
        UsualCard(int valor, int naipe); //Construtor
        Naipes get_naipe() const;
        virtual void print_carta(); 
};

#endif
