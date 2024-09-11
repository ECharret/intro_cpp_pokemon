//
// Created by estel_q68 on 09/09/2024.
//
#include <vector>
#include "SetOfPokemon.h"
using std::vector;

void SetOfPokemon::displayList() {
    for (Pokemon* pokemon: pokedex) {
        pokemon->displayInfo();
    }
}

SetOfPokemon::SetOfPokemon() {
}
SetOfPokemon::~SetOfPokemon() {

}