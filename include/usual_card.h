#ifndef "USUAL_CARD.H"
#define "USUAL_CARD.H"

#include "card.h"

enum Naipes {
    Paus = 1,
    Copas,
    Espadas,
    Ouro
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
