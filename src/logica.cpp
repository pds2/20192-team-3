#include "logica.h"
#include "excessao.h"

Logica::Logica(){
    this->cartaEscolhida = 0;
    this->maiorCarta = 0;
    this->timePrimeira = 0;
    this->timeVenc = 0;
    this->placar[0] = 0;
    this->placar[1] = 0;
}

void Logica::limparMao(){//limpa a logica entre cada mão

    this->cartaEscolhida = 0;
    this->maiorCarta = 0;
    this->timePrimeira = 0;
    this->placar[0] = 0;
    this->placar[1] = 0;
}

int Logica::testeMaoVenc(){//testa quem venceu a mão atual

    //CASOS NORMAIS DE VITORIA DO JOGADOR
    if( (this->placar[0] == 2 && this->placar[1] < 2 ) || 
        (this->placar[0] == 3 && this->placar[1] < 3) ){
        return this->timeVenc = 1;
    }
    //CASOS DE VITORIA DO OPONENTE
    else if( (this->placar[1] == 2 && this->placar[0] < 2 ) || 
             (this->placar[1] == 3 && this->placar[0] < 3) ){
        return this->timeVenc = 2;
    }
    //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA (cada time faz uma e canga na terceira)
    else if(this->placar[1] == 2 && this->placar[0] == 2 && this->timePrimeira == 1){
        return this->timeVenc = 1;
    }
    //CASO DE CANGAR NO FINAL E TIME OPONENTE FEZ PRIMEIRA (cada time faz uma e canga na terceira)
    else if(this->placar[1] == 2 && this->placar[0] == 2 && this->timePrimeira == 2){
        return this->timeVenc = 2;
    }
    //CASO DE CANGAR NA SEGUNDA E TIME JOGADOR FEZ PRIMEIRA
    else if(this->placar[0] == 2 && this->placar[1] == 1){
        return this->timeVenc = 1;
    }
    //CASO DE CANGAR NA SEGUNDA E TIME OPONENTE FEZ PRIMEIRA
    else if(this->placar[1] == 2 && this->placar[0] == 1){
        return this->timeVenc = 2;
    }
    //CASO RARO DE EMPATE EM QUE TODO MUNDO CANGOU
    else if(this->placar[0] == 3 && this->placar[1] == 3){
        return this->timeVenc = 0;
    }
    //CASO NÃO ENTRE EM NENHUM CASO O JOGO DEVE SEGUIR SEU FLUXO.....
    else{
        return 999;
    }
}

void Logica::checkSeuVenc(Carta *selecionadaCarta){//checa se seu time venceu a rodada atual da mão

    //caso voce esteja fazendo
    if(selecionadaCarta->get_valor() > this->maiorCarta){
        this->maiorCarta = selecionadaCarta->get_valor();
        this->timeVenc = 1;
    }
    //caso de cangar e a carta do oponente era maior
    else if(selecionadaCarta->get_valor() == this->maiorCarta && timeVenc == 2){
        this->timeVenc = 0;
    }
    //caso seu aliado jogue uma carta de mesmo peso que a sua
    else if(selecionadaCarta->get_valor() == this->maiorCarta && timeVenc == 1){
        this->timeVenc = 1;
    }
}

void Logica::checkOponenteVenc(Carta *selecionadaCarta){//checa se o time adversario venceu a rodada atual da mão

    //caso seu inimigo esteja fazendo
    if(selecionadaCarta->get_valor() > this->maiorCarta){
        this->maiorCarta = selecionadaCarta->get_valor();
        this->timeVenc = 2;
    }
    //caso seu inimigo cangue e sua carta era maior
    else if(selecionadaCarta->get_valor() == this->maiorCarta && timeVenc == 1){
        this->timeVenc = 0;
    }
    //caso seus inimigos jogam cartas de mesmo valor
    else if(selecionadaCarta->get_valor() == this->maiorCarta && timeVenc == 2){
        this->timeVenc = 2;
    }
}

int Logica::testeRodada(int i){//checa vitoria por rodada

    if(this->timeVenc == 0){
        std::cout << "CANGOU!" << std::endl;
        this->placar[0]++;
        this->placar[1]++;
        if(i == 0){
            this->timePrimeira = 0;
        }
    }

    if(this->timeVenc == 1){
        std::cout << "VOCE E SEU PARCEIRO FIZERAM!" << std::endl;
        this->placar[0]++;
        if(i == 0){
            this->timePrimeira = 1;
        }
    }

    if(this->timeVenc == 2){
        std::cout << "SEUS INIMIGOS FIZERAM!" << std::endl;
        this->placar[1]++;
        if(i == 0){
            this->timePrimeira = 2;
        }
    }

    std::cout << std::endl;
    return testeMaoVenc();
}

void Logica::controleRodada(Baralho* baralho, Mao maoJogador, Mao ia1Mao, Mao ia2Mao, Mao ia3Mao){

    int aux_timeVenc;
    Carta* selecionadaCarta;
    Mesa mesa = Mesa();

    //ESSE É O LOOP DA RODADA!!! //
    for(int i=0;i<3;i++){
        
        this->cartaEscolhida = 0;//por padrão a carta escolhida é sempre a primeira (puramente arbitrario)
        this->maiorCarta = 0;//deve iniciar zero para armazenar qual sera a maior carta da vez
        this->timeVenc = 0;//armazenara qual time vencera , sendo 1 o seu e 2 o do oponente. 0 é empate.

        if(i==0){
            std::cout << "PRIMEIRA" << std::endl;
        }
        if(i==1){
            std::cout << "SEGUNDA" << std::endl;
        }
        if(i==2){
            std::cout << "TERCEIRA" << std::endl;
        }

        for(int j=0;j<4;j++){

            //vez do jogador
            if(j==0){
                
                std::cout << "Qual carta voce quer jogar?" << std::endl;
                maoJogador.mostrar_mao();

                try{
                    std::cin >> this->cartaEscolhida;

                    if(this->cartaEscolhida != 1 &&
                        this->cartaEscolhida != 2 &&
                        this->cartaEscolhida != 3 ){
                        throw Excessao();
                    }
                }   
                catch(Excessao &e){
                    std::cerr << e.what() << std::endl;
                }
                
                selecionadaCarta = maoJogador.descartar(this->cartaEscolhida);
                std::cout << "Voce jogou a carta: ";
                selecionadaCarta->print_carta();
                
                checkSeuVenc(selecionadaCarta);
                mesa.por_na_mesa(selecionadaCarta);
            }

            //vez INIMIGO 1
            else if(j==1){
                this->cartaEscolhida = (std::rand()%(3-i)) + 1;
                selecionadaCarta = ia1Mao.descartar(this->cartaEscolhida);
                std::cout << "Oponente 1 jogou a carta: ";
                selecionadaCarta->print_carta();
                
                checkOponenteVenc(selecionadaCarta);
                mesa.por_na_mesa(selecionadaCarta);
            }

            //vez Parceiro
            else if(j==2){
                this->cartaEscolhida = (std::rand()%(3-i)) + 1;
                selecionadaCarta = ia2Mao.descartar(this->cartaEscolhida);
                std::cout << "Seu Parceiro jogou a carta: ";
                selecionadaCarta->print_carta();

                checkSeuVenc(selecionadaCarta);
                mesa.por_na_mesa(selecionadaCarta);
            }

            //vez INIMIGO 2
            else if(j==3){
                this->cartaEscolhida = (std::rand()%(3-i)) + 1;
                selecionadaCarta = ia3Mao.descartar(this->cartaEscolhida);
                std::cout << "Oponente 2 jogou a carta: ";
                selecionadaCarta->print_carta();

                checkOponenteVenc(selecionadaCarta);
                mesa.por_na_mesa(selecionadaCarta);
            }
        }

        aux_timeVenc = testeRodada(i);

        if(aux_timeVenc != 999){
            limparMao();
            std::cout << std::endl;
            break;
        }
    }
    
    //descartar as cartas restantes
    maoJogador.descartar_mao(&mesa);
    ia1Mao.descartar_mao(&mesa);
    ia2Mao.descartar_mao(&mesa);
    ia3Mao.descartar_mao(&mesa);

    mesa.recolocar_cartas(baralho); //por elas no final 
}

//getters and setters..............................
int Logica::getTimeVenc(){
    return this->timeVenc;
}        