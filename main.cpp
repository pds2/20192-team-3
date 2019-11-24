#include "game.h"
#include "logica.h"
#include "excessao.h"
#include "carta.h"
#include "usual_card.h"
#include "baralho.h"
#include "mao.h"
#include <ctime>     
#include <cstdlib>  // For srand() and rand()   

int main(){

    //variables declaration
    bool game_loop = true;
   
    // Card* selectedCard;

    //------------------------------------------------------------------------------
  
    //INICIALIZAÇÃO DO JOGO
    Game game = Game();
    Logica logica = Logica();
    Baralho baralho = Baralho();

    srand(time(0));

    //GAME LOOPING//
    while(game_loop == true){

        //pontos da partida inicial.
        game.setPontos(2);

        baralho.embaralhar();

        //cria a mao do player e das tres IA's....
        Mao maoJogador = Mao(&baralho);//mao player
        Mao ia1Mao = Mao(&baralho);//mao IA oponente
        Mao ia2Mao = Mao(&baralho);//mao do aliado
        Mao ia3Mao = Mao(&baralho);//mao IA oponente

        //Game logic happens....
        logica.controleRodada(&baralho, maoJogador, ia1Mao, ia2Mao, ia3Mao);

        game.printMaoVencedora(logica);
        
        std::cout << std::endl;

        game.printQuedaVencedor();
        
        //testa condicao de fim da partida (acabou a melhor de três quedas)
        //ATENCAO: essa deve ser a ultima linha dentro do game looping....
        game_looping = game.check_end();
    }

    game.print_vencedor();

    return 0;
}