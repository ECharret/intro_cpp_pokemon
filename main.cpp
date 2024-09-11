#include <iostream>
#include <string>

#include "Pokedex.h"
#include "SetOfPokemon.h"
using std::string;
#include "pokemon.hpp"

int main(){
    Pokemon pikachu(1,"Pikachu",24.3,50,2.0,1);
    Pokemon salameche(2,"Salameche",60,47.99,20,1);
    pikachu.displayInfo();
    pikachu.attackother(&salameche);
    double salavie=salameche.gethitpoint();
    std::cout<<"salameche vie :"<<salavie<<std::endl;
    Pokedex* poke=Pokedex::getinstance();
    return 0;
};
