#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void print(vector<int>& vec){
    for(auto& a:vec)
        cout << a << " ";
    cout << endl;
}
void access_circular(vector<int>& vec){
    int n = vec.size();
    int m = 4;
    
    for(int i = 0; i<m; i++){
        // cout << vec[i%n] << " ";
        //change every value by adding prev and after current element
        // vec[i%n] += vec[(i%n)-1] + vec[(i%n)+1];
        int idx;
        if((i-1)%n == -1){
            idx = n-1;
        }else{
            idx = (i-1)%n;
        }
        cout << "Values : " << i%n << " " << idx << " "
                    << (i+1)%n << "\n";
        vec[i%n] += vec[idx] + vec[(i+1)%n];
    }
    print(vec);
}
int main(){
    vector<int> vec{1,2,1};    
    access_circular(vec);
}