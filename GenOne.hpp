//Generation One

#pragma once 
#include "ArrayBag.hpp"
#include "Pokemon.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include <sstream>
using namespace std; 

// struct Pokemon {
//     string name; 
//     int num; 
//     string type;
//     string type2;
// };

class GenOne: public ArrayBag<Pokemon> {

    public: 
        GenOne();
        GenOne(string file);
        void show();
        void display();
        // void openFile(string file);
        void displayNum(int dexNum);
        void displayName(string name);
        // int getNum();
        // void getName();
};