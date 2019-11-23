#ifndef "GAME.H"
#define "GAME.H"

#include <iostream>
#include "game_logic.h"

class Game {
    private:
        int pontos;//valor que está valendo p/ mão atual.
        int pontuacao_1, pontuacao_2;//pontuacao
        int pontuacao_final[2];//pontuacao de quedas 

    public:
        Game(); //Construtor

        //getters and setters
        int getPontos();
        void setPontos(int pontos);
        int getPontuacao_1();
        void setPontuacao_1(int pontos);
        int getPontuacao_2();
        void setPontuacao_2(int pontos);
        int getPontuacao_Final_1();
        void setPontuacao_Final_1();
        int getPontuacao_Final_2();
        void setPontuacao_Final_2();
        void printMaoVencedora(Logica logica);
        void printQuedaVencedor();

        void reset_pontuacao();
        bool check_end();
        void print_pontuacao();
        void print_vencedor();
        void aumentarPontos();
};

#endif
