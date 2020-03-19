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

void GenOne::displayNum(Pokemon array[], int dexNum){
    string two;
    if(array[dexNum].type2 == "None"){
        two = "";
    } else {
        two = array[dexNum].type2;
    }
    cout << array[dexNum].num << '\t' << array[dexNum].name << '\n' << array[dexNum].type << "/" << two << endl;
}

void GenOne::displayName(Pokemon array[], string name){

}

void GenOne::choice(){
    int decision; 
    cout << "Would you like to search by name or number? (Enter 1 for name. Enter 2 for number): ";
    cin >> decision;
    if(decision == 1){
        
    }
    if(decision == 2){
        
    }
}



 // int i = 0; 
    // while(i < 50){
    //     array[i].num = i+1; 
    //     if(array[i].type2 == "None"){
    //         array[i].type2 = "";
    //     }
    //     cout << array[i].name << "\nType: " << array[i].type << "/" << array[i].type2;
    //     i++;
    //     cout << endl; 
    // }