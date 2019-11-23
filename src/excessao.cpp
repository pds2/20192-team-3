#include "excessao.h"

Excessao::Excessao():exception(){
    
}

const char* Excessao::what() const throw() {
	return "Valor escolhido invalido, refaça sua escolha......";
}