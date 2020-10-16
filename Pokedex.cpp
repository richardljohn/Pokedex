/*
Name: Richard John
File: Pokédex.cpp
*/


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
    for(int i = 0; i < getCurrentSize()-1; i++){
        DexCopy.at(i).display();
    }
}

void Pokedex::deleteDex(){
    int size = getCurrentSize()-1;
    for(int i = 0; i < getCurrentSize()-1; i++){
        if(contains(Pokemon(DexCopy.at(i).getName(), DexCopy.at(i).getNum(), DexCopy.at(i).getType(), DexCopy.at(i).getType2()))) {
            remove(Pokemon(DexCopy.at(i).getName(), DexCopy.at(i).getNum(), DexCopy.at(i).getType(), DexCopy.at(i).getType2()));
        }
    }
    for(int i = 0; i < size; i++){
        DexCopy.pop_back();
    }
}