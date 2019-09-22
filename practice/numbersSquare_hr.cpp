//https://www.hackerrank.com/contests/moodys-analytics-2018-women-in-engineering/challenges/numbers-square?h_r=profile

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        auto generate_differences(int idx, int n){
            vector<int> val(n);
            val[0] = 0;
            for(int i = 1; i <= idx; i++){
              val[i] = 1;
            }
            for(int i = idx+1; i < n; i++){
                val[i] = i*2 - 1;
            }
            return val;
        }
        auto solve(int n, int s){
           
                for(int i = 1; i <= n; i++){
                   
                    int val = 0;
                    int temp = s;
                    vector<int> vec = generate_differences(i-1,n);
                    for(int j = 0; j<n;j++){
                        if(vec[j] == 0){
                            cout << temp << " ";
                            val = temp;
                        }
                        else if(vec[j] == 1){
                            if(i==1){
                                cout << ++temp << " ";
                            }else{
                                cout << --temp << " ";
                            }
                            val = temp;
                        }else{
                            val += vec[j];
                            cout << val << " ";
                        }
                    }                 
                    s = s+((i+1)*2-1);
                    cout << "\n";
                }
            
        }
};
int main(){
    Solution obj;
    int n, s;
    cin >> n >> s;
    obj.solve(n,s);

}