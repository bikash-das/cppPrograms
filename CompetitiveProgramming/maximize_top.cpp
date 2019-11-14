#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <iterator>
using namespace std;
int solve(vector<int>& vec,int n, int k){
    int max = *max_element(vec.begin(),vec.begin()+k);
    if(n==1){
        if(k%2 == 0){
            return vec[0];
        }else{
            return -1;
        }
    }
    if(k==1){
        return vec[1];
    }
    else{
        if(k >= n){
            return max;
        }
        else{
            return max > vec[k] ? max : vec[k];
        }
    }
}
int main(){
    int n,k;
    int input;
    cin>>n>>k;
    vector<int> v{};
    for(int i = 0; i < n; i++){
        cin >> input;
        v.push_back(input);
    }
    cout << solve(v,n,k) << "\n";

}