#include <iostream>
using namespace std; 

enum Pokemon {Bulbasaur = 1, Ivysaur, Venasaur, Charmander, Charmeleon, Charizard, Squirtle, Wartortle, Blastoise};

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
    }
    if(option == 2){
        cout << "Enter number of Pokemon: ";
        cin >> number;
        return Pokemon(number);
    } 
}

int main(){
    Pokemon pokemon = whoseThatPokemon();
    switch (pokemon){
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
    }
    return 0;
}