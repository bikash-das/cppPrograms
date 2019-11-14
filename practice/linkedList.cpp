#include <iostream>

class node{
public:
  int n;
  node* next;
};
class myList{

public:
  node* head;
  myList(){
    head = NULL;
  }
  node* createNode(int val){
    node* temp = new node();
    temp->n = val;
    temp->next = NULL;
    return temp;
  }
  void insert(int val){
    node* temp = createNode(val);
    if(head == NULL){
      head = temp;
    }
    else{
      node* ins = new node();
      ins = head;
      while(ins->next != NULL){
        std::cout << "in add " << ins->n << std::endl;
        ins = ins->next;
      }
      ins = temp;

    }
  }
  void display(){
    node *temp = new node();
    temp = head;
    if(head == NULL){
      std::cout << std::endl;
      return;
    }
    while(temp->next != NULL){
      std::cout << temp->n << " ";
      temp = temp->next;
    }
  }
};

int main(){
  myList* list = new myList();
  list->insert(10);
  list->insert(20);
  list->insert(30);
  list->insert(40);
  list->display();
  // node* temp = new node();
  // temp->n = 10;
  // std::cout << temp->n << std::endl;
  // delete(temp);

}
