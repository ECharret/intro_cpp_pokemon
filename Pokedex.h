//
// Created by estel_q68 on 09/09/2024.
//

#ifndef POKEDEX_H
#define POKEDEX_H

#include "SetOfPokemon.h"
#include <string>

using std::string;

class Pokedex: public SetOfPokemon{
    private:
    Pokedex(const string& nomFichier);
    static Pokedex* instance;
public :
    Pokemon* getOnePokemonByName(string name);
    Pokemon* getOnePokemonById(int id);
    ~Pokedex();

    static Pokedex* getinstance();
};

#endif //POKEDEX_H
