/*
Name: Richard John
File: Pokédex.hpp
*/


#pragma once
#include "Bag.hpp"
#include "Pokemon.hpp"
#include <iostream>
#include <fstream>
using namespace std;

class Pokedex: public Bag<Pokemon> { 
    public: 
        void loadDex(string filename);
        void showDex();
        void deleteDex();
        // void setNumber(int num);
        // int getNumber() const; 

    private: 
        vector<Pokemon> DexCopy;
        int PokemonNumber;
};

#include "Pokedex.cpp"