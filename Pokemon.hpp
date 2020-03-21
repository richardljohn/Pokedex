#pragma once 
#include <iostream>
#include <string>
using namespace std; 

class Pokemon {
    public: 
        Pokemon();
        Pokemon(string nam, int nu, string typ, string typt);
        string getName();
        string getType();
        string getType2();
        int getNum();
        void display();
        void displayN();
        bool hasSecond();

    private: 
        string name_; 
        int num_; 
        string type_;
        string type2_;
};