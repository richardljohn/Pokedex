#pragma once 
#include <iostream>
#include <string>
using namespace std; 

class Pokemon {
    public: 
        Pokemon();
        string getName();
        string getType();
        string getType2();
        int getNum();

    private: 
        string name; 
        int num; 
        string type;
        string type2;
};