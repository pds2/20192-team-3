#include "game.h"

Game::Game(){
    pontos = 0;
    pontuacao_1 = 0;
    pontuacao_2= 0;
    pontuacao_final[0] = 0;
    pontuacao_final[1] = 0;
}

void Game::reset_pontuacao(){
    pontuacao_1 = 0;
    pontuacao_2 = 0;
}

bool  Game::check_end(){
    if(pontuacao_final[0] == 2 || pontuacao_final[1] == 2){
        return false;
    }
    else{
        return true;
    }
}
void Game::print_pontuacao(){

    std::cout << "Placar atual: Dupla1 - " << this->pontuacao_1 << " X " << this->pontuacao_2 << " - Dupla2" << std::endl;
}

void Game::print_vencedor(){

    if(pontuacao_final[0] == 2){
        std::cout << "Dupla1 venceu!!!" << std::endl;
    }
    else{
        std::cout << "Dupla2 venceu!!!" << std::endl;
    }
}

void Game::aumentarPontos(){
    if(this->pontos == 2){
        this->setPontos(4);
    }
    else if(this->pontos == 4){
        this->setPontos(8);
    }
    else if(this->pontos == 8){
        this->setPontos(10);
    }
    else if(this->pontos == 10){
        this->setPontos(12);
    }
}

void Game::printMaoVencedora(Logica logica){

    if(logica.getTimeVenc() == 1){
        setPontuacao_1(2);
        std::cout << "PARABENS, SEU TIME PONTUOU NESSA MAO!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL E: Time1 - "<< getPontuacao_1() << " X "
                    << getPontuacao_2() << " - Time2" << std::endl;
    }
    if(logica.getTimeVenc() == 2){
        setPontuacao_2(2);
        std::cout << "OS SEUS INIMIGOS PONTUARAM NESSA MAO" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL E: Time1 - "<< getPontuacao_1() << " X "
                    << getPontuacao_2() << " - Time2" << std::endl;
    }
}

void Game::printQuedaVencedor(){

     //testa condicao de final de queda
    if(getPontuacao_1() >= 12){

        setPontuacao_Final_1();
        reset_pontuacao();

        std::cout << "PARABENS, SEU TIME GANHOU ESSA QUEDA!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL DE QUEDAS E: Time1 - "<< getPontuacao_Final_1() << " X "
                    << getPontuacao_Final_2() << " - Time2" << std::endl;
        std::cout << std::endl;

    }else if(getPontuacao_2() >= 12){
        
        setPontuacao_Final_2();
        reset_pontuacao();

        std::cout << "QUE PENA, O TIME OPONENTE GANHOU ESSA QUEDA!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL DE QUEDAS E: Time1 - "<< getPontuacao_Final_1() << " X "
                    << getPontuacao_Final_2()<< " - Time2" << std::endl;
        std::cout << std::endl;
    }
}

//getters and setters----------------------------------------------------------------------

int Game::getPontos(){
    return this->pontos;
}

//pedindo truco aumenta o valor em 2 da jogada.
void Game::setPontos(int pontos){
    this->pontos = pontos;
}

int Game::getPontuacao_1() {
    return this->pontuacao_1;
}

void Game::setPontuacao_1(int pontos) {
    this->pontuacao_1 += pontos;
}

int Game::getPontuacao_2(){
    return this->pontuacao_2;
}

void Game::setPontuacao_2(int pontos){
    this->pontuacao_2+= pontos;
}

int Game::getPontuacao_Final_1() {
    return this->pontuacao_final[0];
}

void Game::setPontuacao_Final_1 () {
    this->pontuacao_final[0]+=1;
}

int Game::getPontuacao_Final_2(){
    return this->pontuacao_final[1];
}

void Game::setPontuacao_Final_2() {
    this->pontuacao_final[1] += 1;
}
