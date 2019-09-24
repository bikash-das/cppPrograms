#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main(){
    vector<int> v {1,2,4,3,5,2,2,2,2,6,4,7,10,20,30,20,10};
    int count = 0;
    auto start_iter = v.begin();
    auto end_iter = v.end();
    while((start_iter = find(start_iter,end_iter,2)) != v.end()){
        ++count;
       ++start_iter;

    }
    cout << "Number 2 appears " << count << " times\n";
}