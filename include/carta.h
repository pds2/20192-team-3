#ifndef _CARTA_H
#define _CARTA_H

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
	SeteDeOuros,
	AsDeEspadas,
	SeteDeCopas,
	QuatroDePaus
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
