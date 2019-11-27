#include "usual_card.h"

UsualCard::UsualCard(Valor valor, Naipes naipe):
    Carta::Carta(valor),  _naipe(naipe) {}

UsualCard::UsualCard(int valor, int naipe): Carta::Carta(valor) {
    switch (naipe)
    {
        case 1:
            this->_naipe = Paus;
            break;
        case 2:
            this->_naipe = Copas;
            break;
        case 3:
            this->_naipe = Espadas;
            break;
        case 4:
            this->_naipe = Ouros;
            break;
    }
}

Naipes UsualCard::get_naipe() const {
    return this->_naipe;
}

void UsualCard::print_carta(){
    int naipe = this->_naipe;
    int valor = this->get_valor();

    std::string naipe_string;
    std::string valor_string;

    switch (naipe)
    {
        case 1:
            naipe_string = "Paus";
            break;
        case 2:
            naipe_string = "Copas";
            break;
        case 3:
            naipe_string = "Espadas";
            break;
        case 4:
            naipe_string = "Ouros";
            break;
    }

    switch (valor)
    {
        case 1: case 14:
            valor_string = "Quatro";
            break;
        case 2:
            valor_string = "Cinco";
            break;
        case 3:
            valor_string = "Seis";
            break;
        case 4: case 11: case 13:
            valor_string = "Sete";
            break;
        case 5:
            valor_string = "Dama";
            break;
        case 6:
            valor_string = "Valete";
            break;
        case 7:
            valor_string = "Rei";
            break;
        case 8: case 12:
            valor_string = "As";
            break;
        case 9:
            valor_string = "Dois";
            break;
        case 10:
            valor_string = "Tres";
            break;
    }

    std::cout << valor_string << " de " << naipe_string << std::endl;
}
