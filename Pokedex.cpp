#include "Pokedex.hpp"

void Pokedex::loadDex(string filename){
    fstream file;
    int i = 0;
    file.open(filename);
        if(file.fail()){
            cout << "File can't be opened" << endl;
            exit(1);
        }
        while(!file.eof()){
            string n, t1, t2;
            int nu;
            file >> nu >> n >> t1 >> t2;
            add(Pokemon(n, nu, t1, t2));
            i++;
        }
}

void Pokedex::showDex(){ 
    DexCopy = toVector();
    for(int i = 0; i < getCurrentSize(); i++){
        DexCopy.at(i).display();
    }
}