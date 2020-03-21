//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235
//Assignment: Project 1
//Date: August 30, 2019
//Description: Here we define each method of the public class for Animal. This will enable us to retrieve information on the Animal. 

#include <iostream>
#include "Animal.hpp" //Here we are including the file that contains the class Animal. 
using namespace std;

Animal::Animal() { //This constructor is called when we make an object with animal. 
    bool domestic_ = false; 
    bool predator_ = false; 
    //The reason why we set both values to false is because in the Animal.hpp file both domestic and predator were set to false. 
}

Animal::Animal(string name, bool domestic, bool predator){ //This is another constructor, and it has parameters for a few values. 
    setName(name); //The parameter for name is taken and the name of the animal is set to the name given. 
    domestic_ = domestic; 
    predator_ = predator; 
}

void Animal::setName(string name){ //In the method setName we give the user a parameter. This is asking for what the animal is called.
    name_ = name; //The function takes the input from the user and sets the variable name_ to what the user gave. 
}

string Animal::getName() const{ //This function allows us to retrieve the name of the animal. 
    return name_; 
}

void Animal::setPredator(){ //This method is what makes the user able to make his/her animal a predator. It sets the value of predator_ to true. 
    predator_ = true;
}

bool Animal::isPredator() const{ //This function allows us to retrieve the value of predator_.
    return predator_; 
}

void Animal::setDomestic(){ //This method is what makes the user able to make his/her animal domestic. 
    domestic_ = true; //If this function is called, domestic_ is set to true, making the animal domestic. 
}

bool Animal::isDomestic() const{ //This function allows us to retrieve the value of domestic_. 
    return domestic_; //If this function is called, it will return either true or false. 
}

void Animal::display(){ //This is the display function. 
    string d_status, p_status = "";
    if(isDomestic()){ //if the animal is domestic. 
        d_status = ""; //d_status will not contain anything because it is a domestic animal. 
    }
    else{
        d_status = "not"; //d_status will contain not because it is not a domestic animal. 
    }
    if(isPredator()){ //if the animal is a predator. 
        p_status = "it is "; //p_status will contain "it is" because the animal is a predtor. 
    }
    else{
        p_status = "is not "; //p_status will contain "is not" because the animal is not a predator. 
    }

    cout << name_ << " is " << d_status << " domestic and " << p_status << "a predator\n" << endl; //this is the output sentence. 

}

bool operator==(Animal first, Animal second){ //this will return the sentence asked for in the project guidelines. 
    return first.getName() == second.getName() && first.isDomestic() == second.isDomestic() && first.isPredator() == second.isPredator();
}