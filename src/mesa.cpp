#include "mesa.h"

Mesa::mesa(){
    
}

Mesa::~mesa(){
    int tamanho = this->mesa.size();
    for(int i=0; i<tamanho; i++){
        delete this->mesa[i];
    }
}
}

//devolve as cartas para o baralho
void Mesa::recolocar_cartas(Baralho* baralho){
    std::vector<Carta*>::iterator it;
    for(it = this->mesa.begin(); it != this->mesa.end(); ++it){
        baralho->inserir_carta(*it);
    }
}

//coloca uma carta na mesa
void Mesa::por_na_mesa(Carta* carta){
    this->mesa.push_back(carta);
}
