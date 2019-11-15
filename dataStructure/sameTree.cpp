#include <iostream>
using namespace std;

class node{
    public: 
        int data;
        node* left;
        node* right;
        // to make our lives simpler, include a constructor
        node(int d){
            this->data = d;
        }
};

class bst{
    public:
    node* root;
        bst(){
            this->root = nullptr;
        }
        node* insert(node* root, int data){
            node* newnode = new node(data);
            if(root == nullptr)
                return newnode;
            
            //iterative
            node* parent = nullptr, *current = root;
            while(current != nullptr){
                parent = current;
                if(newnode < parent){
                    current = parent->left;
                }else{
                    current = parent->right;
                }
            }
            //insert left or right according to parent
            if(newnode < parent)
                parent->left = newnode;
            else
                parent->right = newnode;         

            return root;
        }
        void printInOrder(node* root){
            if(root == nullptr){
                return;
            }
            printInOrder(root->left); 
            std::cout << root->data << " ";
            printInOrder(root->right);
            // left, vertex, right
        }
};

int main(){
    bst* first = new bst();
    bst* second = new bst();
    first->root = first->insert(first->root,10);
    first->root = first->insert(first->root,20);
    first->root = first->insert(first->root,5);
    first->root = first->insert(first->root,70);
    first->root = first->insert(first->root,19);

    first->printInOrder(first->root);



    // cout << "Enter vertex for first tree\n");
    // int input = 0;
    // while(input != -1){

    // }
    
}