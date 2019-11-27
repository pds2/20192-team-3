#include "mesa.h"

Mesa::Mesa(){
    
}

Mesa::~Mesa(){
    this->mesa.clear();
}

//devolve as cartas para o baralho
void Mesa::recolocar_cartas(Baralho* baralho){
    std::vector<Carta*>::iterator it;
    for(it = this->mesa.begin(); it != this->mesa.end(); ++it){
        baralho->inserir_carta(*it);
    }
    // this->baralho.clear();
}

//coloca uma carta na mesa
void Mesa::por_na_mesa(Carta* carta){
    this->mesa.push_back(carta);
}
