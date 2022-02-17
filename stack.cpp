#include <iostream>
#include <string>

using namespace std;

#define MAX 1000

class Stack
{
  public:
    int top;
    int a[MAX]; // Maximum size of Stack
    Stack() { top = -1; }
    bool push(int x){
        
        if(top < MAX){
            top++;
            a[top] = x;
            return true;

        }

        return false;
    }
    int pop(){
        if(top == -1) return 0;
        int curr = a[top];
        a[top] = '\0';
        return curr;
    };
    int peek(){

        return a[top];
    };
    bool isEmpty();
};

int main(){

Stack mystack;

mystack.push(10); 

printf("%i",mystack.pop());

return 0;

}