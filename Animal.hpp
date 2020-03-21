//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235
//Assignment: Project 1
//Date: August 30, 2019
/*
Description: This is a simple class called Animal. 
It has public data members which allow you to retrieve private information.
The members of public are functions that will allow the user to retrieve information from the private data members.
The private data members are the components that tells us more about the animal.
This includes the name, if it is domestic and if it is a predator. 
*/ 

#pragma once

#include <iostream>
using namespace std;

class Animal //This is the class Animal.
{
    public: //These are the public data variables and methods for obtaining private information. 
        Animal(); //This is a constructor. This will be called as soon as you make an object with this class. 
        Animal(string name, bool domestic = false, bool predator = false); //This is also a constructor. 
        string getName() const; //This is a method that will allow you to get the name of an object created with class Animal.
        bool isDomestic() const; //This is a method that tells if the animal is domestic or not. 
        bool isPredator() const; //This is a method that tells if the animal is a predator or not.
        void setName(string name); //This is a method that lets us give the private variable name_ a value. 
        void setDomestic(); //This is a method that lets us give the private variable domestic_ a value. 
        void setPredator(); //This is a method that lets us give the private variable predator_ a value. 
        /**@post displays animal data in the form:
        "animal_name is [not] domestic and [it is / is not] a predator\n"
        **/
        void display(); 
        friend bool operator==(Animal first, Animal second); //this is a friend function. 
        
        

    private: //These are the private data variables. 
        string name_; //This is the variable that stores the name of the animal. 
        bool domestic_; //This is a bool variable that tells whether or not the animal is domestic or not. 
        bool predator_; //This is a bool variable that ells whether or not the animal is a predator or not. 
};