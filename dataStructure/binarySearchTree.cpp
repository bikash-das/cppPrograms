#include <iostream>
#include <iomanip>
class node{
    public:
    node *left, *right;
    int data;
    node(int data){
        this->data = data;
    }
};
class bst{
    public:
    node* root;
    bst(){
        this->root = nullptr;
    }
    /* accept root as reference to modify the tree */
    void insert(node* &root,int value){
        if(root == nullptr){
            root = new node(value);
        }
        if(value < root->data){
            if(root->left == nullptr){
                root->left = new node(value);
            }else{
                insert(root->left,value);
            }
        }else{
            if(root->right == nullptr){
                root->right = new node(value);
            }else{
                insert(root->right, value);
            }
        }
    }
    bool contains(node* root, int value){
        if(root == nullptr)
            return false;
        if(root->data == value){
            return true;
        }else if(value < root->data){   // it should be on the left side
            if(root->left == nullptr){  // if there is no left node then it shoudl return false
                return false;
            }else{
                return contains(root->left,value);
            }
        }else{                          //otherewise it should be in the right node
            if(root->right == nullptr){   // if there is not right child it should return false
                return false;
            }else{
                return contains(root->right, value);
            }
        }
    }
    void printInOrder(node* root){
        if(root == nullptr){
            return;
        }
        printInOrder(root->left); 
        std::cout << root->data << " ";
        printInOrder(root->right);
         // left, myself, right
    }
};
int main(){
    bst* mybst = new bst();
    // mybst->insert(mybst->root,20);
    // mybst->insert(mybst->root,30);
    // mybst->insert(mybst->root,40);
    mybst->insert(mybst->root,1000);
    mybst->insert(mybst->root,300);

    mybst->printInOrder(mybst->root);
    std::cout << "\n";
    std::cout << std::boolalpha <<  mybst->contains(mybst->root, 10300) << std::endl;
}
