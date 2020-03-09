#include <iostream>
using namespace std; 

enum Pokemon {Charmander, Charmeleon, Charizard};

Pokemon whoseThatPokemon(){
    string name;
    cout << "Enter the name of the Pokémon you want: "; 
    cin >> name;
    if(name == "Charmander"){
        return Charmander;
    }
    if(name == "Charmeleon"){
        return Charmeleon;
    }
    if(name == "Charizard"){
        return Charizard;
    }
}

int main(){
    Pokemon pokemon = whoseThatPokemon();
    switch (pokemon){
        case Charmander:
            cout << "Charmander\nType: Fire" << endl; 
            break;
        case Charmeleon:
            cout << "Charmeleon\nType: Fire\n";
            break;
        case Charizard:
            cout << "Charizard\nType: Fire/Flying\n";
            break;
    }
    return 0;
}