#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar){
    map<int,int> m;
    for(auto val : ar){
        m[val]++;
    }
    int count = 0;
    for(auto& m_pair : m){
        count += m_pair.second/2;
    }
    return count;

}
int main(){
    int n ;
    cin >> n;
    int input;
    vector<int> v;
    for(int i = 0; i<n;i++){
        cin >> input;
        v.push_back(input);
    }
    cout << sockMerchant(n,v);
}