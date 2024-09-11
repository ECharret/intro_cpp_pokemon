#pragma once

#include <string>

using std::string;

class Pokemon{
    private :
    int id;
    string name;
    double hitpoint;
    double attack;
    double defense;
    int generation;
    static int numberOfPokemon;

public:
    Pokemon()=delete;
    Pokemon(int id, const string &name, double hitpoint, double attack, double defense, int generation);
    Pokemon(const Pokemon& anotherPokemon);
    ~Pokemon();
    void displayInfo() const;
    string getname() const;
    double gethitpoint();
    double getattack();
    double getdefense();
    void attackother(Pokemon*);
    void mort();
};