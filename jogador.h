#ifndef "JOGADOR_H"
#define "JOGADOR_H"

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string>

class Jogador{
    private:
        string nomeJog;
        int jogador;
        bool distribuir;
    public: 
        Jogador(string nome,int num, bool distr);
        ~Jogador();
        string GetNome(){ return this->nomeJog = nome};
        int GetNum(){ return this->jogador = num;}
        bool GetDistr(){ return this->distribuir = distr; }
        void SetDistr(bool distr) { distribuir = distr; }
};

#endif

