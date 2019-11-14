#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long int;

void solve(vector<int>& vec){
    for(int i = 0; i < vec.size()-1; i++){
        cout << vec[i] << endl;
        for(int j = i+1; j < vec.size(); j++){
            cout << vec[j] << " ";
        }
        cout << endl;
    }
    
}
int main(){
    int n = 5;
    vector<int> vec(n);
    ll input;
    map<int,ll> mymap;
    ll res = 1;

    for(int i = 0; i<n; i++){
        cin >> input;
        vec.push_back(input);
        if(input == 0){
            mymap[i] = 0;
        }else{
            res = res * input;
             mymap[i] = res;
        }
   }
    for(int i = 0; i< n;i++){
        cout << mymap[i] << " ";
    }
}