#include "mao.h"
#include "mesa.h"

Mao::Mao(Baralho* baralho){
    for(int i=0; i<TAMANHO_MAO; i++){
        this->mao.push_back(baralho->mostrar_carta());
    }
}

Mao::~Mao(){
    this->mao.limpar();
}

void mostrar_mao(Carta *carta){
    carta->mostrar_carta();
}

void Mao::mostrar_mao(){
    int carta_contador = 1;
    std::vector<Carta*>::iterator it;
    for(it = this->mao.begin(); it != this->mao.end(); ++it){
        std::cout << "Carta " << carta_contador << " -> ";
        carta_contador++;
        mostrar_mao(*it);
    }
}

Carta* Mao::descartar(int carta_pos){
    carta_pos--;

    Carta* carta = this->mao[carta_pos];

    std::vector<Carta*>::iterator it;
    it = this->mao.begin() + carta_pos;

    this->mao.limpar(it);
    return carta;
}

void Mao::descartar_mao(Mesa *mesa){
    std::vector<Carta*>::iterator it;
    for(it = this->mao.begin(); it != this->mao.end(); ++it){
        mesa->por_na_mesa(*it);
    }
    this->hand.limpar();
}

int Mao::tamanho_mao(){
    return this->mao.size();
}
