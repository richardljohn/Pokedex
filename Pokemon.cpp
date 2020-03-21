#include "ArrayBag.hpp"
#include "GenOne.hpp"
#include "Pokemon.hpp"

Pokemon::Pokemon(){

}

string Pokemon::getName(){
     return name_;
}

string Pokemon::getType(){
    return type_;
}

string Pokemon::getType2(){
    string second; 
    if(type2_ == "None"){
        second = "";
    }
    else{
        second = type2_; 
    }
    return second; 
}

int Pokemon::getNum(){
    return num_; 
}