#include <iostream>
using namespace std;

class singlyLinkedListNode {
public:
    int data;
    singlyLinkedListNode* next;
    singlyLinkedListNode(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class singlyLinkedList{
public:
    singlyLinkedListNode* head;
    singlyLinkedListNode* tail;
    singlyLinkedList(){
        this->head = nullptr;
        this->tail = nullptr;
    }
};
void print_list(singlyLinkedListNode* copyHead){
    /* while node not equals nullptr and node stores copy of the head pointer*/
    cout << "List values: ";
    while(copyHead){
      cout << copyHead->data << " ";
      copyHead = copyHead->next;
    }
    cout << "\n";
}
singlyLinkedListNode* insertNodeAtHead(singlyLinkedListNode* &copyHead, int data){
    singlyLinkedListNode* newNode = new singlyLinkedListNode(data);
    if(copyHead!=nullptr){
        newNode->next = copyHead;
    }
    copyHead = newNode;
    return copyHead;
}
int main(){
    singlyLinkedList* ll = new singlyLinkedList();
    int n;
    cout << "Enter n?\n";
    cin >> n;
    int data;
    for(int i = 0; i < n; i++){
        cin >> data;
        ll->head = insertNodeAtHead(ll->head,data);
        print_list(ll->head);
    }

}