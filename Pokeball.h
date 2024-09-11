//
// Created by estel_q68 on 09/09/2024.
//

#ifndef POKEBALL_H
#define POKEBALL_H

#include "SetOfPokemon.h"

class Pokeball : public SetOfPokemon{
public:
    Pokeball();
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);
    ~Pokeball();
};



#endif //POKEBALL_H
