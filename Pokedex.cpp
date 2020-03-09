#include <iostream>
using namespace std; 

enum Pokemon {Charmander, Charmeleon, Charizard};

int main(){
    string pokemon;
    cout << "What Pokemon do you want?: ";
    cin >> pokemon;

    switch (pokemon){
        case Charmander:
            cout << "Charmander\nType: Fire/Flying"; 
    }
}