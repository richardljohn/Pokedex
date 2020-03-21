//Generation One

#pragma once 
#include "ArrayBag.hpp"
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

class GenOne: public ArrayBag<Pokemon> {
    public: 
        GenOne();
        void openFile(string file);
        void displayNum(int dexNum);
        void displayName(string name);
        int getNum();
        void getName();
};