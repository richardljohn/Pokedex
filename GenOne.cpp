//Generation One 

#include "GenOne.hpp"

// void GenOne::openFile(string file, Pokemon array[]){
//     fstream gen1;
//     int i = 0; 
//     while(!gen1.eof()){
//         gen1 >> array[i].num >> array[i].name >> array[i].type >> array[i].type2;
//         i++;
//     }
//     gen1.close();
// }

// int GenOne::getNum(){
//     int pick;
//     cout << "Enter the number of the Pokémon you want: ";
//     cin >> pick;
//     return pick;
// }

// void GenOne::getName(){
//     string pick;
//     cout << "Enter the name of the Pokémon you want: ";
//     cin >> pick;
//     cout << pick;
// }

// void GenOne::displayNum(Pokemon array[], int dexNum){
//     string two;
//     if(array[dexNum].type2 == "None"){
//         two = "";
//     } else {
//         two = array[dexNum].type2;
//     }
//     cout << array[dexNum].num << '\t' << array[dexNum].name << '\n' << array[dexNum].type << "/" << two << endl;
// }

// void GenOne::displayName(Pokemon array[], string name){
//     int decision; 
//     cout << "Would you like to search by name or number? (Enter 1 for name. Enter 2 for number): ";
//     cin >> decision;
//     if(decision == 1){
//         getName();
//     }
//     if(decision == 2){
//         getNum();
//     }
//     string two, select;
//     int target; 
//     select = name; 
//     for(int i = 0; i < 50; i++){
//         if(array[i].type2 == "None"){
//             two = "";
//         } 
//         else {
//             two = array[i].type2;
//         }
//         if(array[i].name == name){
//             cout << array[i].num << '\t' << array[i].name << '\n' << array[i].type << "/" << two << endl;
//         }
// }

// void GenOne::selection(){
//     int decision; 
//     cout << "Would you like to search by name or number? (Enter 1 for name. Enter 2 for number): ";
//     cin >> decision;
//     if(decision == 1){
//         getName();
//     }
//     if(decision == 2){
//         getNum();
//     }
// }



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