/*
Name: Richard John
File: Main.cpp
*/

#include "Pokedex.hpp"

int main() { 
    Pokedex Dex; 
    Dex.loadDex("GenerationOne1.txt");
    Dex.showDex();
    Dex.deleteDex();
    Dex.loadDex("GenerationOne2.txt");
    Dex.showDex();
    Dex.deleteDex();
    Dex.loadDex("GenerationOne3.txt");
    Dex.showDex();
    Dex.deleteDex();
    return 0;
}