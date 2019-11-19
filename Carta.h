#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

class Carta{
	public:
		Carta(std::string naipe, std::string face, int value){
			this->cardnaipe = naipe;
			this->cardface = face;
			this->cardvalue = value;
		}
		Carta();
		
		std::string Show_Carta(){
			return (cardface + "de"+ cardnaipe);
		}
		
	private:
		std::string cardnaipe;
		std::string cardface;
		int cardvalue;
};

#endif
