#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// void csv_import(string data[][10], int columns, int *records, string filename){

//     ifstream inFile;

//     int current = 0;

//     inFile.open(filename);

//     // cout<< "I'm here" << endl;
//     while(!inFile){

//         inFile.clear();
//         inFile.open(filename);
//     };

//     int i = 0;

//     while(inFile.good() && *records <= 10){
//         // cout<< "I'm here also" << endl;
//         current++;
//         for(int j = 0; j < columns; j++){
//             string temp;
//             getline(inFile, temp, ',');
//             data[i][j] = temp;
   
//         }
//         i++;
    
//         *records = current;
//     }

//     inFile.close();
// }

// int main(){

//     int records;

//     string data[10][10];

//     csv_import(data,3,&records,"customer.csv");

//     for(int i = 0; i < 10; i++){

//         for(int j = 0; j < 3; j++){

//             cout<< data[i][j] << endl;

//         }
//     }


//     return 0;
// }

void csv_import2(NODE** data, string filename) {
    ifstream inFile;
    inFile.open(filename);
    
    string buffer;
    NODE* tail = *data;


    while (inFile && !inFile.eof()) {
        NODE* temp = new NODE();

        getline(inFile, buffer, ',');
        temp->firstname = buffer;


        getline(inFile, buffer, ',');
        temp->lastname = buffer;


        getline(inFile, buffer);
        temp->email = buffer;

        if (tail == nullptr) {
            *data = new NODE();
            tail = *data;

        } else {
            tail->next = new NODE();
            tail = tail->next;
        }

        tail->firstname = temp->firstname;
        tail->lastname = temp->lastname;
        tail->email = temp->email;
    
    }

    inFile.close();
}