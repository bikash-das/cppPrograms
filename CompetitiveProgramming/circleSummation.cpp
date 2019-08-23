#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
const int P=1000000007;
using ll = long long int;

void printq(deque<ll> q){
    for(auto& val: q){
        cout << val << " ";
    }
    cout << endl;   
}
void print(deque<ll> q, ll m,int j){
    if((m+j) != q.size()){
        for(int i = 0; i<m+j; i++)
            rotate(q.rbegin(),q.rbegin()+1,q.rend());    
    }
    
    for(auto& val: q){
        cout << val << " ";
    }
    cout << endl;
}
void solve(deque<ll>& q,int n,ll m){
        deque<ll> copyQ = q; // for start
        ll val;
        for(int j = 0; j < n; j++){
            copyQ = q;
            for(ll i = 0; i < m; i++){
                val = copyQ.front();
                copyQ.pop_front();
                val += copyQ.front()+copyQ.back();
                copyQ.push_back(val%P);
            }
            print(copyQ,m,j);
            rotate(q.begin(),q.begin()+1,q.end());
        }
        cout << endl;    
}

int main(){
    int t;
    scanf("%d",&t);
    int n;
    ll m;
    while(t--){
        cin>>n>>m;
        deque<ll> a;
        ll input;
        for(ll i = 0; i < n; i++){
            scanf("%lld",&input);
            a.push_back(input);
        }
        solve(a,n,m);
    }     
}