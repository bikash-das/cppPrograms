#include <iostream>
#include <map>
#include <algorithm>
#include <numeric>
#include <vector>
#include <assert.h>
using namespace std;
void print(vector<int>& vec){
    for(auto& v : vec){
        cout << v << " ";
    }
    cout << "\n";
}
void countDup(vector<int>& vec){
    assert(vec.size() > 0);
    print(vec);
    map<int,int> mymap {};
    for(int i = 0; i<vec.size(); i++){   // O(n)
        mymap[vec[i]]++;
    }
    for(auto& val : mymap){
        if(val.second > 1){
            cout << val.first << " ";
        }
    }
    cout << "\n";
}
int main(){
    vector<int> vec {1,1,1,1,1,5,3,1,3,6,2};
    countDup(vec);
}