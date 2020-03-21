#include "ArrayBag.hpp"
#include "GenOne.hpp"
#include "Pokemon.hpp"

// Pokemon::Pokemon(){
    
// }

Pokemon::Pokemon(string nam, int nu, string typ, string typt){
    name_ = nam;
    num_ = nu;
    type_ = typ;
    type2_ = typt;
}

string Pokemon::getName(){
     return name_;
}

string Pokemon::getType(){
    return type_;
}

string Pokemon::getType2(){
    return type2_; 
}

int Pokemon::getNum(){
    return num_; 
}

bool Pokemon::hasSecond(){
    if(type2_ == "None"){
        return false;
    }
    else{
        return true; 
    }
}

void Pokemon::display(){
    string second;
    if(hasSecond()){
        second == type2_;
    }
    else{
        second == "";
    }
    cout << name_ << "\t" << num_ << "\t" << type_ << "\t" << second << endl;
}

void Pokemon::displayN(){
    string second;
    if(hasSecond()){
        second == type2_;
    }
    else{
        second == "";
    }
    cout << num_ << "\t" << name_ << "\t" << type_ << "\t" << second << endl;
}