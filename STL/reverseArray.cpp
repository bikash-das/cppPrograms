#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
void getReverse(vector<int> vec){
    auto iter = vec.begin();
    auto iter_rev = vec.rbegin();
    int size = vec.size() / 2;
    while(size--){    
        swap(*iter++, *iter_rev++);
    }
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout, " "));
    cout << "\n";
}
int main(){
    vector<int> vec {1,2,4,5,6};
    getReverse(vec);
    reverse(vec.begin(),vec.end()); //can be done using reverse function
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout, " "));
}