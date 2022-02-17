#include <iostream>
#include <vector>

using namespace std;


#define MAX 1000

class Queue {
  public:
    int rear_value;
    int a[MAX]; // Maximum size of Queue
    Queue() { rear_value = -1; }
    bool enqueue(int x){
        
        if(rear_value < MAX){
            rear_value++;
            a[rear_value] = x;
            return true;

        }

        return false;

    }
    int dequeue(){
        if(rear_value > -1){

            int curr = a[0];

        //    int * array = new int [MAX];

        //    for(int i = 0; i < rear_value; i++){

        //        array[i] = a[i+1];
        //        cout<<"This "<< i << " " <<array[i]<<endl;
        //    }

        //     array = a;



        for(int i = 0; i < rear_value; i++){

            a[i] = a[i+1];

        }
        a[rear_value] = '\0';

            return curr;

        }

        return 0;

    };
    int front(){
        if(rear_value > -1) return a[0];

        return 0;
    };
    int rear(){
        if(rear_value > -1) return a[rear_value];
        return 0;
    }
};


int main(){

Queue myqueue;

myqueue.enqueue(10); 

// for(int i = 0; i <= myqueue.rear_value; i++){

//     cout<< myqueue.a[i]<< endl;
// }

return 0;

};