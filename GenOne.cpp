//Generation One 

#include "GenOne.hpp"

void GenOne::openFile(string file, Pokemon array[]){
    fstream gen1;
    int i = 0; 
    while(!gen1.eof()){
        gen1 >> array[i].num >> array[i].name >> array[i].type >> array[i].type2;
        i++;
    }
    gen1.close();
}

void GenOne::display(Pokemon array[]){
    int i = 0; 
    while(i < 50){
        if(array[i].type2 == "None"){
            array[i].type2 = "";
        }
        cout << array[i].name << "\nType: " << array[i].type << "/" << array[i].type2;
        i++;
        cout << endl; 
    }
}