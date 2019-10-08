# Descrição:
Desenvolvimento de um sistema que simula a realização de uma partida de Truco que envolva 4 participantes. O sistema modelará todos os atributos envolvidos em uma partida convencional. Portanto, trabalharemos com os conceitos de herança, modelagem, POO, dentre outros. O programa será desenvolvido utilizando C++.
# User Stories

  ## Carta 

Como carta - elemento unitário do baralho - deve definir sua posição por meio de um naipe e um valor, de modo que esses parâmetros sirvam para designar uma possível vitória em rodadas, tendo em vista o fato de a carta com a posição mais importante ser a vencedora do turno. Como exemplo de carta, podemos citar o 4 de Paus, a maior carta do truco, e o 6 de ouros, uma carta de menor importância. 

#### Critérios de aceitação: 
•	Exibir sua posição, naipe e valor;

## Baralho 

Como baralho - conjunto de cartas - deve definir a ordem das cartas no montante após um jogador embaralhar e cortar. Essa ordem das cartas definirá o modo de distribuir as cartas, uma vez que um subconjunto de cartas será selecionado para ser atribuído a cada jogador. O baralho é composto por 40 cartas. 

#### Critérios de aceitação: 
•	Exibir o corte e embaralhamento das cartas que formam o montante;
•	Exibir a ordem das cartas no montante;
•	Exibir a distribuição de cartas aos jogadores. 


## Jogador 

Eu enquanto jogador - portador de uma mão - devo exercer interferência no montante, usando as ferramentas de cortar e queimar mão, e jogar carta, além de poder ser solicitado em situações específicas para votar truco, votar seis, votar nove e votar doze.  O jogo é composto por 4 jogadores. 

  #### Critérios de aceitação:
•	Decidir se fará o corte ou queima de mão; 
•	Exibir sua opinião sobre um possível truco, seis, nove ou doze;
•	Exibir a carta jogada em um turno.


## Dupla

Como dupla - um conjunto de jogadores - deve exercer interferência no jogo, podendo solicitar o aumento de pontos com um truco, seis, nove ou doze a partir da mão da dupla. Dessa forma, também será definida a condição de vitória ou derrota da dupla na rodada. 
	
  #### Critérios de aceitação: 
•	Exibir a solicitação de truco, seis, nove ou doze;
•	Exibir a condição da dupla: vitória ou derrota; 
•	Exibir a quantidade de pontos da dupla.


# CRC
## Classe Carta

Responsabilidades | Colaboradores
--------- | ------
Naipe     | Baralho
Posição   | 
Valor     | 

## Classe Baralho

Responsabilidades | Colaboradores
--------- | ------
Ordem das Cartas | Carta
Embaralhar | Jogador
Distribuir Cartas | 
 

## Classe Jogador

Responsabilidades | Colaboradores
--------- | ------
Mão de Cartas | Carta
Queimar mão | Baralho
Votar Truco | Dupla
Votar Seis |
Votar Nove |
Votar Doze |
Jogar Carta |
Cortar Baralho |

## Classe Dupla

Responsabilidades | Colaboradores
--------- | --------------
Vitória | Jogador
Derrota | 
Pedir Truco | 
Pedir Seis | 
Pedir Nove | 
Pedir Doze | 
