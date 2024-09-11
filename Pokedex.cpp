//
// Created by estel_q68 on 09/09/2024.
//
#include <string>

#include "Pokedex.h"

#include <fstream>
#include <sstream>

Pokedex::Pokedex(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier); // Ouvre le fichier
    if (!fichier.is_open()) { // Vérifie si le fichier est bien ouvert
        std::cerr << "Impossible d'ouvrir le fichier : " << nomFichier << std::endl;
        return;
    }
    std::string ligne;

    std::getline(fichier, ligne);

    while (std::getline(fichier, ligne)) {
        // Lit le fichier ligne par ligne
        std::cout<<ligne<<std::endl;
        std::stringstream ss(ligne); // Utilise un flux pour diviser la ligne
        std::string cellule;
        std::vector<std::string> donneesLigne;

        // Divise la ligne en cellules séparées par des virgules
        while (std::getline(ss, cellule, ',')) {
            donneesLigne.push_back(cellule); // Ajoute chaque cellule au vecteur
        }
        int id=std::stoi(donneesLigne.at(0));
        string name=donneesLigne.at(1);
        double hitpoint=std::stod(donneesLigne.at(5));
        double attack=std::stod(donneesLigne.at(6));
        double defense=std::stod(donneesLigne.at(7));
        int generation=std::stoi(donneesLigne.at(11));

        pokedex.push_back(new Pokemon (id,name,hitpoint,attack,defense,generation));
    }
}

Pokemon* Pokedex::getOnePokemonByName(string name) {
    return nullptr;
};
Pokemon* Pokedex::getOnePokemonById(int id) {
    return nullptr;
};

Pokedex::~Pokedex(){};

Pokedex* Pokedex::instance = nullptr;

Pokedex* Pokedex:: getinstance() {
    if(instance==nullptr) {
        instance=new Pokedex("../pokedex.csv");
    }
    return instance;
}