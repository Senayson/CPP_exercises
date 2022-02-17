#include <iostream>
#include <fstream>
#include <string>
#include "cpluspluslabs.h"

using namespace std;

// class NODE {
//   public:
//     string firstname;
//     string lastname;
//     string email;
//     NODE* next;
// };



void add_node_head(NODE** data, string firstname,string lastname, string email){

     NODE * temp = new NODE();

     temp->firstname = firstname;
     temp->lastname = lastname;
     temp->email = email;
     temp->next = nullptr;

    // if(*data == NULL){
    //   *data = temp;
    //   return;
    // }

     temp->next = *data;   


     * data = temp;

    // delete temp;    


}

// int main(){

// NODE* data = nullptr; 

// add_node_head(&data,"aspen","olmsted","aspeno@aol.com");

// add_node_head(&data,"sally","jones","sjones@aol.com");



// }

