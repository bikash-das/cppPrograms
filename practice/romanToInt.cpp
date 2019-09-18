/*
    Rules:
     i.     I can be placed before V and X
     ii.    X can be placed before L (50) and C (100) to make 40 and 90
     iii.   C can be placed before D (500) and M (1000) to make 400 and 900
     
    Q. Given a roman integral,convert it to an integer.  1 <= n <= 3999
*/
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
class Solution{
private:
        auto generate_map(){
            map<char,int> m {};
            m['I'] = 1; m['V'] = 5; m['X'] = 10; m['L'] = 50;m['C'] = 100;m['D'] = 500;m['M'] = 1000;
            return m;
        }
public:
        void solve(){
            auto m = generate_map();
            // romans highest to lowest, use this
            cout << "Enter roman string: ";
            string s;
            cin >> s;
            int sum = 0;
            vector<int> val;
            for(int i=0; i<s.size(); i++){
                val.push_back(m[s[i]]);
            }
            for(int i = 0; i<s.size();i++){
                if(i+1 < s.size()){
                    if(val[i] >= val[i+1]){
                        sum = sum+val[i];
                    }else{
                        sum = sum + val[i+1] - val[i];
                        i++;
                    }      
                }else{
                    sum += val[i];
                }              
            }
            cout << sum << "\n";
        }
};
int main(){
    
    Solution* obj = new Solution(); //created in heap storage space
    while(true){
        obj ->solve();
    }

}