#ifndef "DUPLA_H"
#define "DUPLA_H"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<"jogador.h">
#include<string>

class Dupla{
    private:
        int _pontos;

    public: 
        void pedir_truco();
        void pedir_seis();
        void pedir_nove();
        void pedir_doze();
        void vitoria();
        void derrota();
    
        Dupla(int _pontos): pontos(_pontos){}
    //add seriam os pontos adicionais ( 2 em vitória normal, 4 em truco,etc)
        void setar_pontos(int pontos, int add){
            this->pontos = pontos + add;
        }
        void vitoria(int add){
     //if truco aceito e etc
            add = 4;
            
            setar_pontos();
        }
        void derrota(int add){
        // if truco aceito    
            add = -4
                
            setar_pontos();
        }
};

#endif

