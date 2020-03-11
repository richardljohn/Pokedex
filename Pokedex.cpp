#include <iostream>
using namespace std; 

enum Pokemon {Bulbasaur = 1, Ivysaur, Venasaur, Charmander, Charmeleon, Charizard, Squirtle, Wartortle, Blastoise, Caterpie, Metapod, Butterfree};

Pokemon whoseThatPokemon(){
    int option, number; 
    string name;
    cout << "Find a Pokémon by Name or Number? (Enter 1 for name. Enter 2 for number.):";
    cin >> option;
    if(option == 1){
         cout << "Enter the name of the Pokémon you want: "; 
         cin >> name;
        if(name == "Bulbasaur"){
            return Bulbasaur;
        }
        if(name == "Ivysaur"){
            return Ivysaur;
        }
        if(name == "Venasaur"){
            return Venasaur;
        }
        if(name == "Charmander"){
            return Charmander;
        }
        if(name == "Charmeleon"){
            return Charmeleon;
        }
        if(name == "Charizard"){
            return Charizard;
        }
        if(name == "Squirtle"){
            return Squirtle;
        }
        if(name == "Wartortle"){
            return Wartortle;
        }
        if(name == "Blastoise"){
            return Blastoise;
        }
        if(name == "Caterpie"){
            return Caterpie;
        }
        if(name == "Metapod"){
            return Metapod; 
        }
        if(name == "Butterfree"){
            return Butterfree; 
        }
    }
    if(option == 2){
        cout << "Enter number of Pokemon: ";
        cin >> number;
        return Pokemon(number);
    } 
}

void pokemonInfo(Pokemon poke){
    switch (poke){
        case Bulbasaur:
            cout << "Bulbasaur\nType: Grass/Poison" << endl; 
            break;
        case Ivysaur:
            cout << "Ivysaur\nType: Grass/Poison\n";
            break;
        case Venasaur:
            cout << "Venasaur\nType: Grass/Poison\n";
            break;
        case Charmander:
            cout << "Charmander\nType: Fire" << endl; 
            break;
        case Charmeleon:
            cout << "Charmeleon\nType: Fire\n";
            break;
        case Charizard:
            cout << "Charizard\nType: Fire/Flying\n";
            break;
        case Squirtle:
            cout << "Squirtle\nType: Water" << endl; 
            break;
        case Wartortle:
            cout << "Wartortle\nType: Water\n";
            break;
        case Blastoise:
            cout << "Blastoise\nType: Water\n";
            break;
        case Caterpie:
            cout << "Caterpie\nType: Bug\n";
            break; 
        case Metapod: 
            cout << "Metapod\nType: Bug\n";
            break;
        case Butterfree:
            cout << "Butterfree\nType: Bug\n";
            break;
    }
}

int main(){
    Pokemon pokemon = whoseThatPokemon();
    pokemonInfo(pokemon);
    return 0;
}