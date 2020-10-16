#include "Pokedex.hpp"

int main() { 
    Pokedex Dex; 
    Dex.loadDex("GenerationOne1.txt");
    Dex.showDex();
    return 0;
}