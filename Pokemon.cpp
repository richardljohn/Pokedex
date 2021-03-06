/*
Name: Richard John
File: Pokémon.cpp
*/

#include "Pokemon.hpp"

Pokemon::Pokemon(){
    name = "";
    dexNum = 0;
    type = "";
    type2 = "";
}

Pokemon::Pokemon(string name, int num, string type, string typ2){
    this->name = name;
    this->dexNum = num;
    this->type = type;
    this->type2 = typ2;
}

string Pokemon::getName()const {
     return name;
}

string Pokemon::getType() const {
    return type;
}

string Pokemon::getType2() const{
    return type2;
}

int Pokemon::getNum()const {
    return dexNum; 
}

void Pokemon::setName(string nam){
    name = nam;
}

void Pokemon::setType(string typ){
    type = typ;
}

void Pokemon::setType2(string type) {
    type2 = type;
}

void Pokemon::setNum(int nu){
    dexNum = nu;
}

void Pokemon::display(){
    string slash = "/";
    if(getType2() == "None"){
        slash = "";
        type2 = "";
    } else {
        slash = "/";
        type2 = getType2();
    }
    cout << getNum() << ". " << getName() << "\t" << getType() << slash << getType2() << endl;
}

bool Pokemon::operator==(const Pokemon& P1) const{
    return ( getName() == P1.getName() && getNum() == P1.getNum() && getType() == P1.getType() && getType2() == P1.getType2());
}

// void Pokemon::displayByNum(int num){
//     cout << getName() << "\t" << getNum() << "\t" << getType() << "\t" << getType2() << endl;
// }

// void Pokemon::displayByName(string name){
//     cout << getName() << "\t" << getNum() << "\t" << getType() << "\t" << getType2() << endl;
// }