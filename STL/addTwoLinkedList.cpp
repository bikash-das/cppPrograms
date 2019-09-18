#include <iostream>
class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int n): val(n), next(nullptr){};
};
class LinkedList {
    public:
        ListNode *head = nullptr;
        int count = 0;
        void insert(int n){
            ListNode* newNode = new ListNode(n);
            if(head == nullptr){
                head = newNode;
            }else{
                ListNode* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            count ++;
        }
        void display(){
            ListNode* temp = head;
            while(temp!=nullptr){
                std::cout << temp->val << " ";
                temp = temp->next;               
            }
            std::cout << "\n";
        }
      
};
int main(){
    LinkedList* l1 = new LinkedList();
    LinkedList* l2 = new LinkedList();
    std::cout << "Enter numbers in l1: (-1 to exit)  \n";
    int input = 0;
    while(true){
        std::cin >> input;
        if(input == -1){
            break;
        }
        l1->insert(input);
    }
    std::cout << "Enter numbers in l2: (-1 to exit)  \n";
    input = 0;
    while(true){
        std::cin >> input;
        if(input == -1){
            break;
        }
        l2->insert(input);
    }
    // l1->display();
    // l2->display();
    int maxNum = l1->count > l2->count ? l1->count : l2->count;
    ListNode* traverse_l1 = l1->head;
    ListNode* traverse_l2 = l2->head;
    LinkedList* result = new LinkedList();
    bool carrySet = false;
    int first,second,sum=0;
    for(int i = 1; i <= maxNum; i++){
        if(traverse_l1 != nullptr){
            first = traverse_l1->val;
            traverse_l1 = traverse_l1->next;
        }else{
            first = 0;
        }
        if(traverse_l2 != nullptr){
            second = traverse_l2->val;
            traverse_l2 = traverse_l2->next;
        }else{
            second = 0;
        }
        // std::cout << first << " " << second << "\n";        
        sum = first + second;
        if(carrySet){
            sum += 1;
            carrySet = false;
            if(sum > 9){
                sum -= 10;
                carrySet = true;
            }            
        }else{
            if(sum > 9){
                sum = sum - 10;
                carrySet = true;
            }
        }              
        result->insert(sum);       
    }
    if(carrySet){
        result->insert(1);
    }
    result->display();
}   