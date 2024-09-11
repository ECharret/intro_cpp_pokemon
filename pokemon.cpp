#include "pokemon.hpp"
#include <iostream>
#include <string>

int Pokemon::numberOfPokemon=0;


using std::string;
Pokemon:: Pokemon(int id, const string &name, double hitpoint, double attack, double defense, int generation) :
          id(id), name(name), hitpoint(hitpoint), attack(attack), defense(defense), generation(generation){
    numberOfPokemon++;
};

Pokemon::~Pokemon(){
    std::cout<<"Destructeur"<<std::endl;
};

Pokemon::Pokemon(const Pokemon& anotherPokemon) : name(anotherPokemon.name),id(anotherPokemon.id),
        hitpoint(anotherPokemon.hitpoint), attack(anotherPokemon.attack), defense(anotherPokemon.defense),
        generation(anotherPokemon.generation){
    std::cout<<"Recopie de " << name <<std::endl;
    numberOfPokemon++;
}

void Pokemon:: displayInfo() const{
    std::cout<<"id :"<<id<<std::endl;
    std::cout<<"nom :"<<name<<std::endl;
    std::cout<<"hitpoint :"<<hitpoint<<std::endl;
    std::cout<<"attack :"<<attack<<std::endl;
    std::cout<<"defense :"<<defense<<std::endl;
    std::cout<<"generation :"<<generation<<std::endl;
};

string Pokemon:: getname() const{
    return name;
}

double Pokemon::gethitpoint() {
    return hitpoint;
}

double Pokemon:: getattack(){
    return attack;
}

double Pokemon::getdefense() {
    return defense;
}

void Pokemon::attackother(Pokemon* another) {
    double test=another->hitpoint;
    if (this->attack>another->defense) {
        test=another->hitpoint+another->defense-this->attack;
    }
    else {
        std::cout<<"t nul"<<std::endl;
    }
    another->hitpoint=test;
    std::cout<<"sal a vie :"<<another->hitpoint<<std::endl;
    another->mort();
}

void Pokemon::mort() {
    if (hitpoint<=0) {
        std::cout<<"mort"<<std::endl;
        hitpoint=0;
    }
}
