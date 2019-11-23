#include "carta.h"

Carta::Carta(Valor valor): _valor(valor) {}

Carta::~Carta(){}

Carta::Carta(int valor){
    switch (valor)
    {
        case 1:
            this->_valor = Quatro;
            break;
        case 2:
            this->_valor = Cinco;
            break;
        case 3:
            this->_valor = Seis;
            break;
        case 4:
            this->_valor = Sete;
            break;
        case 5:
            this->_valor = Dama;
            break;
        case 6:
            this->_valor = Valete;
            break;
        case 7:
            this->_valor = Rei;
            break;
        case 8:
            this->_valor = As;
            break;
        case 9:
            this->_valor = Dois;
            break;
        case 10:
            this->_valor = Tres;
            break;
        case 11:
            this->_valor = Sete de Ouros;
            break;
        case 12:
            this->_valor = As de Espadas;
            break;
        case 13:
            this->_valor = Sete de Copas;
            break;
        case 14:
            this->_valor = Quatro de Paus;
            break;
    }
}

Valor Carta::get_valor() const {
    return this->_valor;
}
