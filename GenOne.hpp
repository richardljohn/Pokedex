//Generation One

#pragma once 
#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

struct Pokemon {
    string name; 
    int num; 
    string type;
    string type2;
};

class GenOne {
    public: 
        void openFile(string file, Pokemon array[]);
        void displayNum(Pokemon array[], int dexNum);
        void displayName(Pokemon array[], string name);
        int getNum();
        void getName();
        void selection();
};