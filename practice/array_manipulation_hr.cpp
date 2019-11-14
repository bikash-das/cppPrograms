#include <bits/stdc++.h>
using namespace std;

using ll = long long int;


int main(){
    ll n,m;
    cin >> n >> m;
    
    vector<ll> v(n);
    for(ll i = 0; i<n ;i++)
        v[i] = 0;

    vector<vector<int>> queries;
    ll a,b,k;
    ll max  = 0;
    for(ll i = 0; i < m; i++){
        cin >> a >> b >> k;     
       
        for_each(v.begin()+(a-1),v.begin()+b,[&](auto& val){
            val += k;
            if(val > max){
                max = val;
            }
        });
        // cout << "\n";        
        // copy(v.begin(),v.end(),ostream_iterator<ll>(cout," "));    
        
    }
    cout << max;
}