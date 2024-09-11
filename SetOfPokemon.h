//
// Created by estel_q68 on 09/09/2024.
//

#ifndef SETOFPOKEMON_H
#define SETOFPOKEMON_H

#include <iostream>
#include <vector>
#include "pokemon.hpp"

using std::vector;

class SetOfPokemon {

protected:
    vector<Pokemon*> pokedex;
public:
    virtual Pokemon* getOnePokemonByName(string name)=0;
    virtual Pokemon* getOnePokemonById(int id)=0;
    void displayList();
    SetOfPokemon();
    ~SetOfPokemon();
};



#endif //SETOFPOKEMON_H
