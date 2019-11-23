#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

enum Valor{
	Quatro = 1,
	Cinco,
	Seis,
	Sete,
	Dama,
	Valete,
	Rei,
	As,
	Dois,
	Tres,
	Sete de Ouros,
	As de Espadas,
	Sete de Copas,
	Quatro de Paus
};

class Carta{
	private:
		std::string cardnaipe;
		std::string cardface;
		Valor _valor;
		bool mao; 
	public:		
		Carta(std::string naipe, std::string face, int value){
			cardnaipe = naipe;
			cardface = face;
			mao = true;
		}
		
		Carta(Valor valor); //Construtor
        	Carta(int valor); //Construtor
        	virtual ~Carta(); //Destrutor
        	virtual Valor get_valor() const;
        	virtual void print_carta() = 0; 		
};

#endif
