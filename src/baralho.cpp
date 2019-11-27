#include "baralho.h"

Baralho::Baralho(){

    UsualCard* quatro_paus = new UsualCard(QuatroDePaus, Paus); //criar zap
    this->baralho.push_back(quatro_paus);

    UsualCard* sete_copas = new UsualCard(SeteDeCopas, Copas); //criar sete de copas
    this->baralho.push_back(sete_copas);

    UsualCard* as_espadas = new UsualCard(AsDeEspadas, Espadas); //criar espadilha
    this->baralho.push_back(as_espadas);

    UsualCard* sete_ouros = new UsualCard(SeteDeOuros, Ouros); //criar sete de ouros
    this->baralho.push_back(sete_ouros);

    for(int i=Paus; i<=Ouros; i++){
        for(int j=Quatro; j<=Tres; j++){

            //evitando cartas duplicadas 
            if(j == Quatro && i == Paus)
                continue;
            if(j == Sete && (i == Copas || i == Ouros))
                continue;
            if(j == As && i == Espadas)
                continue;
    
            UsualCard* carta = new UsualCard(j, i);
            this->baralho.push_back(carta);
        }
    }
}

Baralho::~Baralho(){
    int tamanho = this->baralho.size();
    for(int i=0; i<tamanho; i++){
        delete this->baralho[i];
    }
}

int aleatorio(int i){
    return std::rand()%i;
}

void Baralho::embaralhar(baralho)
    std::random_shuffle(baralho.begin(), baralho.end(), aleatorio)
}

void mostrar_carta_Baralho(Carta *carta){
    carta->print_carta();
}

void Baralho::mostrar_Baralho() {
    std::vector<Carta*>::iterator it;
    for(it = this->baralho.begin(); it != this->baralho.end(); it++){
        mostrar_carta_Baralho(*it);
    }
}

Carta* Baralho::pegar_carta(){
    Carta* carta = this->baralho[0]; //pega primeira do baralho
    std::vector<Carta*>::iterator it;
    it = this->baralho.begin();
    this->baralho.erase(it); //tira primeira do baralho
    return carta; // retorna a primeira carta
}

void Baralho::inserir_carta(Carta* carta){
    this->baralho.push_back(carta);
}
