cmake_minimum_required(VERSION 3.29)
project(_pokemon)

set(CMAKE_CXX_STANDARD 20)

add_executable(pokemon main.cpp pokemon.cpp
        SetOfPokemon.cpp
        PokemonParty.cpp
        Pokeball.cpp
        Pokedex.cpp
)