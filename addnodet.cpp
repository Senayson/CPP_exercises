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



void add_node_tail(NODE** data, string firstname,string lastname, string email){

     NODE * temp = new NODE();

     temp->firstname = firstname;
     temp->lastname = lastname;
     temp->email = email;
     temp->next = nullptr;

    if(*data == NULL){
      *data = temp;
      return;
    }

     NODE * tail = *data;

     while(tail->next != NULL){
    
         tail = tail->next;
     }

     tail->next = temp;


}

// int main(){

// NODE* data = nullptr; 

// add_node_tail(&data,"aspen","olmstead","aspeno@aol.com");



// }

