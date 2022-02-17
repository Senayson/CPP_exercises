#include <iostream>

using namespace std;

class BST
{
  public:
  int data;
  BST *left, *right;
  BST(){
      data = 0;
      left = nullptr;
      right = nullptr;
  }
  BST(int x){
      data = x;
      left = nullptr;
      right = nullptr;
  }
  void insert(int val){

      if(data == 0){

          data = val;

      } 
        BST * prev = this;
        BST * temp = this;

        while(temp != NULL){

            prev = temp;

            if(val < temp->data){
                temp = temp->left;
            } else {
                temp = temp->right;
            }  

        }

        if(val < prev->data){

            prev->left = new BST (val);

        } else {
            
            prev->right = new BST (val);
        }
      
  }

void traverser(BST * node, int n, int &res, int & count)
{
    // int count = 0;


    if (node == nullptr)
        return;
 
    // cout << "Counter " << count << endl;
    if (count <= n) {

        traverser(node->left, n,res, count); // 10 - 2 - 1 - left null right null 4 
        count++; // 1 2 3

        if (count == n){
            //  printf("%d ", node->data);
            res = node->data;

        }

 
        traverser(node->right, n, res, count);
        return;
    }
}


int nth_node(int n){

    int res;
    int count = 0;
    traverser(this, n, res, count);

    
    return res;

}

};


int main(){

BST node(10);


node.insert(2);

node.insert(1);
node.insert(4);
node.insert(20);
node.insert(25);
node.insert(30);

cout << node.nth_node(3) << endl;


return 0;

};


