#include <iostream>
#include <memory>

struct node {
    int data;
    std::shared_ptr<node> next;
    node(int val) : data{val}, next {nullptr} {}
};

class linked_list{
    public:
        linked_list() : head{nullptr}{
          std::cout << "New List Created: ";
        }
        void push_front(int data){
            std::shared_ptr<node> temp = std::make_shared<node>(data);
            if(head){
                temp->next = std::move(head);
                head = std::move(temp);
            }else{
                head = std::move(temp);  
            }
        }
        void push_back(int data){
            std::shared_ptr<node> temp = std::make_shared<node>(data);
            if(head){
                node* pos = head.get();
                while(pos->next!=nullptr){
                    pos = pos->next.get();
                }
                pos->next = std::move(temp);
            }else{
                head = std::move(temp);
            }
        }
        int pop_front(){
            /* move head to a temp var reassign head by assigning temp's next */
            auto temp_head = std::move(head);
            int value = temp_head->data;
            head = std::move(temp_head->next); 
            return value;
        }
        void reverse(){

        }
        void reverse_inline(){
            auto current = head;
            std::shared_ptr<node> next, prev;
            while(current != nullptr){
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }
        void print(){
            auto temp = head;
            while(temp){
                std::cout << temp->data << " ";
                temp = temp->next;
            }
        }
        void clear(){
            while(head){
                head = std::move(head->next);
            }
            // if(head==nullptr){
            //     std::cout << "\nSpace cleared\n";
            // }
        }
        ~linked_list(){
           clear();
        }
    private:
        std::shared_ptr<node> head;       
};

int main(){
    linked_list list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.print();
    std::cout << "\nAfter push_back 100: ";
    list.push_back(100);
    list.print();
    std::cout <<"\nAfter push_front 911: ";
    list.push_front(911);
    list.print();
    std::cout << "\nReverse list: ";
    list.reverse_inline();
    list.print();

    // pop a value
    std::cout << "\nPopped front element: " << list.pop_front() << "\n";
    std::cout << "List Elements: ";
    list.print();

    std::cout << "\n";
}