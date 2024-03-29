#ifndef _MESA_H
#define _MESA_H

#include <vector>
#include "carta.h"
#include "mao.h"
#include "baralho.h"

class Mesa{
    private:
        std::vector<Carta*> mesa;
    public:
        Mesa();
        ~Mesa();
        void mostrar_mesa();
        void recolocar_cartas(Baralho* baralho); // tira da mesa e bota no baralho
        void por_na_mesa(Carta* carta);
};

#endif
