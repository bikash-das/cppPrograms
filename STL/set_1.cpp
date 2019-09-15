/*
 Internally Set is stored as balanced binary tree
 Set also allows copy and move constructor. Move is helpful
 when returning a set from a function without copying
*/
#include <iostream>
#include <set>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    set<int,greater<int>> numbers {8,7,6,6,7,4,3,2,1};
    //default comparasion is less<> elements in set will be in desending order
    // copy(numbers.begin(), numbers.end(), ostream_iterator<int>{cout," "});
    set<int> nodups{};
    int input;
    set<int> duplicates{};
    cout << "Enter values (-1 to exit): ";
    while(true){
        cin >> input;
        if(input == -1)
            break;
        auto pr = nodups.insert(input);
        if(pr.second == false)
            duplicates.insert(*pr.first);
    }
    cout << "After Removing duplicates elements: ";
    copy(nodups.begin(),nodups.end(),ostream_iterator<int>(cout," "));
    if(duplicates.size()>0){
        cout << "\nDuplicates Elements: ";
        copy(duplicates.begin(),duplicates.end(),ostream_iterator<int>(cout, " "));
   
    }
   cout << "\n";
}