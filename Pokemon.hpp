#pragma once 
#include <iostream>
#include <string>
using namespace std; 

class Pokemon {
    public: 
        Pokemon();
        Pokemon(string nam, int nu, string typ, string typt);
        string getName() const ;
        string getType() const;
        string getType2() const ;
        int getNum() const ;
        void setName(string nam);
        void setType(string typ);
        void setType2(string type);
        void setNum(int nu);
        // void displayByNum(int num);
        void display();
        // void displayByName(string name_);
        bool operator==(const Pokemon& P1) const; 

    private: 
        string name; 
        int dexNum; 
        string type;
        string type2;
};

#include "Pokemon.cpp"