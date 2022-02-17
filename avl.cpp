#include <iostream>
// #include "cpluspluslabs.h"

using namespace std;

class Node
{
  public:
  int key;
  Node *left;
  Node *right;
  int height;

}; 

Node* new_node(int key){

    Node * curr = new Node ();

    curr->key = key;
    curr->height = 1;
    curr->left = NULL;
    curr->right = NULL;

    return curr;

}

Node* insertnb(Node* node, int key){
    
    if(node == NULL){

        return new_node(key);

    }

    int height = 0;

        Node * prev = node;
        Node * temp = node;

        while(temp != NULL){

            temp->height++;

            prev = temp;

            if(key < temp->key){
                temp = temp->left;
            } else {
                temp = temp->right;
            }  

        }

        if(key < prev->key){

            prev->left = new_node(key);

        } else {
            
            prev->right = new_node(key);
        }

        return node;

}

Node *left_rotate(Node *x) {

    Node * temp = x->right;
    Node * leftie = temp->left;
    
    temp->left = x;
    x->height--;
    temp->height++;
    x->right = leftie;





}

