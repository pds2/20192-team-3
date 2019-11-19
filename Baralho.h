#ifndef BARALHO_H
#define BARALHO_H

#include "carta.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

const int Cartas_por_Baralho = 40;

class Baralho{
	public:
		Baralho();
		void embaralhar();
		void distribuir_cartas();
		void imprime_baralho() const;
		
	private:
		Carta *baralho;
		
};

#endif
