//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235
//Assignment: Project 3
//Date: August 30, 2019
//Description: This is a the hpp file for ZooRecord.cpp. 
//This class inherits from the ArrayBag class and it contains the functions for the ZooRecord class. 

#pragma once //We use this to make a class. 
#include "Animal.hpp"
#include "ArrayBag.hpp"



class ZooRecord: public ArrayBag<Animal> {

    public:
        ZooRecord(); //default constructor for empty record

        /**parameterized constructor
         @pre the input file is expected to be in CSV
        (comma separated value) format as:
        "animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
        backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
        @param input_file_name the name of the input file
        @post adds Animal objects to record as per the data in the input file
        **/
        ZooRecord(std::string input_file_name);
        
        /**@post displays all animals in record, one per line by calling animal's
        display method” **/
        void display(); 
     
};