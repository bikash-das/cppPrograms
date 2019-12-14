#include <iostream>
#include <stack>
#include <iomanip>
using namespace std;
// template <class int>
template <typename T>
class queue_using_stack{
    private:
        stack<T> first_stack, second_stack;       
    public:
        void enqueue(T x){
            // move all the elements of first_stack into second_stack
            while(!first_stack.empty()){
                second_stack.push(first_stack.top());
                first_stack.pop();                          
            }
            first_stack.push(x);        // now insert

            // move back all the elements from second_stack to first_stack
            while(!second_stack.empty()){
                first_stack.push(second_stack.top());
                second_stack.pop();
            }
        }
        T dequeue(){
            // check if first_stack is empty
            if(first_stack.empty()){
                std::cout << "Stack is emtpy";
                return 0;
            }
            T x = first_stack.top();
            first_stack.pop();
            return x;
        }
        bool empty(){
            return first_stack.empty();
        }
        T top(){
            return first_stack.top();
        }    
        T size(){
            return first_stack.size();
        }   
};
int main(){
    queue_using_stack<int> q_int;   //queue of integers
    q_int.enqueue(10);
    q_int.enqueue(20);
    q_int.enqueue(30);
    std::cout << "Performing dequeue ints:: ";
    while(!q_int.empty()){
        cout << q_int.top() << " ";
        q_int.dequeue();
    }
    cout << "\n";
    queue_using_stack<double> q_dub;
    q_dub.enqueue(10.25);
    q_dub.enqueue(234.34);
    q_dub.enqueue(123.92);
    std::cout << "Performing dequeue doubles:: ";
    while(!q_dub.empty()){
        cout << q_dub.top() << " ";
        q_dub.dequeue();
    }
    cout << "\n";
}