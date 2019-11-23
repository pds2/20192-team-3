#include "baralho.h"

Baralho:Baralho(){

    UsualCard* quatro_paus = new UsualCard(QuatroDePaus, Paus); //criar zap
    baralho.push_back(quatro_paus);

    UsualCard* sete_copas = new UsualCard(SeteDeCopas, Copas); //criar sete de copas
    baralho.push_back(sete_copas);

    UsualCard* as_espadas = new UsualCard(AsDeEspadas, Espadas); //criar espadilha
    baralho.push_back(as_espadas);

    UsualCard* sete_ouros = new UsualCard(SeteDeOuros, Ouros); //criar sete de ouros
    baralho.push_back(sete_ouros);

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
            baralho.push_back(carta);
        }
    }
}

Baralho::~Baralho(){
    int tamanho = this->baralho.tamanho();
    for(int i=0; i<tamanho; i++){
        delete this->baralho[i];
    }
    this->baralho.clean();
}

int aleatorio(int i){
    return std::rand()%i;
}

void Baralho::embaralhar(){
    std::embaralhamento(baralho.begin(), baralho.end(), aleatorio);
}

void mostrar_carta_baralho(Carta *carta){
    carta->print_carta();
}

void Baralho::mostrar_baralho(){
    std::vector<Carta*>::iterator it;
    for(it = baralho.begin(); it != baralho.end(); ++it){
        mostrar_carta_baralho(*it);
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
