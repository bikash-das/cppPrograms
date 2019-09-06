#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;


int main(){

    int N;
    cin >> N;
    vector<ll> arr;
    arr.reserve(N);
    ll input;
    for(int i = 0; i<N; i++){
        cin >> input;
        arr.push_back(input);
    }
    int Q;
    cin >> Q;
    int q;
    for(int i = 0; i<Q; i++){
        cin >> q;
        int idx;
        if(binary_search(arr.begin(),arr.end(),q)){
             auto find = lower_bound(arr.begin(),arr.end(),q);
             //gives you iterator pointing to that element, so minus first iterator
             // value gives us index
             cout << "Yes " << (find-arr.begin()+1) << "\n";
        }else{
            auto find = lower_bound(arr.begin(),arr.end(),q);
            cout << "No " << (find-arr.begin()+1) << "\n";
        }
      
    }
}