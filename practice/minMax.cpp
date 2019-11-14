#include <bits/stdc++.h>
using namespace std;
int main(){
    void miniMaxSum(vector<int> arr);
    using ll = unsigned long int;
    vector<ll> arr = {256741038, 623958417, 467905213, 714532089, 938071625};
    ll sum = 0;
    sum = accumulate(arr.begin(),arr.end(),0L);
    cout << "Sum Accumulate: " << sum << "\n";
    sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout << sum << "\n";
    auto maxmin = minmax_element(arr.begin(),arr.end());
    cout << sum - *maxmin.first << " " << sum - *maxmin.second << "\n";
    // miniMaxSum(arr);
}

void miniMaxSum(vector<int> arr) {
   long int len = arr.size();
    unsigned long int i,max=0,min=0,sum=0;

    for(i=0;i<len;i++){    
        sum += arr[i];
        //arr.push_back(sum);
    }
    sort(arr.begin(), arr.end());
        max= sum - arr[0];
        min= sum - arr[len-1];        
       cout<<min<<"\t";
       cout<<max;
}