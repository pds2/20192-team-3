#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

class Carta{
	private:
		std::string cardnaipe;
		std::string cardface;
		int cardvalue;
		bool mao; 
	public:		
		Carta(std::string naipe, std::string face, int value){
			cardnaipe = naipe;
			cardface = face;
			cardvalue = value;
			mao = true;
		}
		
		std::string Show_Carta(){
			return (cardface+ "de" + cardnaipe);
		}
		
};

#endif
