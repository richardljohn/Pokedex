//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235
//Assignment: Project 1
//Date: August 30, 2019

#include "ZooRecord.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include <sstream>
using namespace std;

//This is the default constructor and will be called as soon as the ZooRecord for something is created. 
ZooRecord::ZooRecord():ArrayBag(){ //As you can see, this has nothing inside. 

}

ZooRecord::ZooRecord(std::string input_file_name):ArrayBag(){
    string junk, currLine, animal_name, hair, //In this constructor every single value of the zoo.csv file is defined as a string. 
    feathers, eggs, milk, airborne, aquatic, 
    predator, toothed, backbone, breathes, venomous, 
    fins, legs, tail, domestic, catsize, class_type; 

    ifstream fin(input_file_name);
    if (fin.fail()){
        cerr << "File cannot be opened. :(" << endl;
        exit(1); // exiting sadly. :(
    }

    /*
    This is the way we are going to read the file and get the variables and data we want.
    We have written every single variable in the file that is avaliable. 
    This is how we obtain the name, predator, and domestic status of each animal.
    */ 
    getline(fin, junk);
    while(getline(fin, currLine)){ //We will scan each row one by one. 
        stringstream ss(currLine); 
        getline(ss, animal_name, ','); //This line to the last getline is us basically scanning the entire csv file and getting the values for each value. 
        getline(ss, hair, ',');
        getline(ss, feathers, ',');
        getline(ss, eggs, ',');
        getline(ss, milk, ',');
        getline(ss, airborne, ',');
        getline(ss, aquatic, ',');
        getline(ss, predator, ',');
        getline(ss, toothed, ',');
        getline(ss, backbone, ',');
        getline(ss, breathes, ',');
        getline(ss, venomous, ',');
        getline(ss, fins, ',');
        getline(ss, legs, ',');
        getline(ss, tail, ',');
        getline(ss, domestic, ',');
        getline(ss, catsize, ',');
        getline(ss, class_type, ','); //This is the last line. 

        int dom, pre; //We have two variables that are storing the values of predator and domestic. 
        pre = std::stoi(predator); //this stores the value of predator in pre. 
        dom = std::stoi(domestic); //this stores the value of domestic in dom. 
        add(Animal(animal_name, dom, pre)); //this adds the name, domestic status, and predator status of an animal into the ZooRecord output. 
        }

        fin.close(); //This closes the file. 
    }
    
    
    void ZooRecord::display(){ //This is the implementation of the display method. 
    for(int i = 0; i <= item_count_-1; i++){ //This loops through the entire ZooRecord output. 
        items_[i].display(); //This displays the entire ZooRecord. 
    }

} //end of program. 