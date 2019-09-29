#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
class node{
    public:
    node *left, *right;
    int data;
    node(int data){
        this->data = data;
    }
};
class bst{
    private:
       bool isBST(node* root, int max, int min){
           if(root == nullptr){
               return true;
           }
           if(root->data <= min || root->data > max){
               return false;
           }
           return isBST(root->left,root->data,min) && isBST(root->right,max,root->data);
       }
   
    public:
    node* root;
    bst(){
        this->root = nullptr;
    }
    /* accept root as reference to modify the tree */
    void insert(node* &root,int value){
        if(root == nullptr){
            cout << "Root: " << value << "\n";
            root = new node(value);
            return;
        }
        if(value < root->data){
            if(root->left == nullptr){
                cout << "\nLeft: " << value << " of " << root->data;
                root->left = new node(value);
            }else{
                insert(root->left,value);
            }
        }else{
            if(root->right == nullptr){
                cout << "\nRight: " << value << " of " << root->data;
                root->right = new node(value);
            }else{
                insert(root->right, value);
            }
        }
    }
     bool isSameTree(node* root1, node* root2){
        if(root1==nullptr && root2==nullptr){
            return true;
        }
        if(root1 == nullptr || root2 == nullptr){
            return false;
        }
        return root1->data == root2->data && isSameTree(root1->left,root2->left) && isSameTree(root1->right,root2->right);
    }
    bool contains(node* root, int value){
        if(root == nullptr)
            return false;
        if(root->data == value){
            return true;
        }else if(value < root->data){   // it should be on the left side
            if(root->left == nullptr){  // if there is no left node then it should return false
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
        cout << root->data << " ";
        printInOrder(root->right);
         // left, vertex, right
    }
    bool isBST(node* root){
        return isBST(root, numeric_limits<int>::max(),numeric_limits<int>::min());
    }

};
int main(){
    bst* mybst = new bst();
    // mybst->insert(mybst->root,20);
    // mybst->insert(mybst->root,30);
    // mybst->insert(mybst->root,40);
    mybst->insert(mybst->root,10);
    mybst->insert(mybst->root,20);
    mybst->insert(mybst->root,5);
    mybst->insert(mybst->root,70);
    mybst->insert(mybst->root,19);

    cout << "\n";
    mybst->printInOrder(mybst->root);
    cout << "\n";
    cout << boolalpha <<  mybst->contains(mybst->root, 20) << endl;

    cout <<(mybst->isBST(mybst->root) ? "Binary search tree" : "Not a bst") << "\n";

    bst* bst2 = new bst();
    bst2->insert(bst2->root,10);
    bst2->insert(bst2->root,20);
    bst2->insert(bst2->root,5);
    bst2->insert(bst2->root,70);
    bst2->insert(bst2->root,19);
    cout << endl <<  boolalpha << (bst2->isSameTree(bst2->root,mybst->root) ? "same tree " : "different tree") << "\n";
}
