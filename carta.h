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
		Valor _valor;
	public:			
		Carta(Valor valor); //Construtor
        	Carta(int valor); //Construtor
        	virtual ~Carta(); //Destrutor
        	virtual Valor get_valor() const;
        	virtual void print_carta() = 0; 		
};

#endif
