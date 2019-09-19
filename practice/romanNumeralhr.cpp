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
#include <unordered_map>
#include <algorithm>
#include <iterator>
using namespace std;
class Solution{
private:
        auto generate_map(){
            map<char,int> m {};
            m['I'] = 1; m['V'] = 5; m['X'] = 10; m['L'] = 50;m['C'] = 100;m['D'] = 500;m['M'] = 1000;
            return m;
        }
public:
        int romanToInt(string s){
            auto m = generate_map();
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
            // cout << sum << "\n";
            return sum;
        }
        void intToRoman(int n){
            map<int,string> m;
            m[1000] = "M";
            m[900] = "CM";m[500]="D";m[400]="CD";m[100]="C";m[90]="XC";
            m[50]="L";m[40]="XL";m[10]="X";m[9]="IX";m[5]="V";
            m[4]="IV";m[1]="I";
            vector<int> v;
            for(const auto& val : m){
                v.push_back(val.first);
            }
            // reverse(v.begin(),v.end());
            // copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
            int temp = n;
            int base;
            
            while(n>0){
                for(auto iter = v.begin(); iter < v.end();iter++){
                    if(temp >= *iter){
                        base = *iter;
                    }
                }
                // cout << "base: " <<  base << endl;
                int div = n / base;
                for(int i =0; i < div; i++){
                    cout << m[base];
                }
                n = n%base;
                temp = n;
            }               
        }
};
int main(){
    
    Solution* obj = new Solution(); //created in heap storage space
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int val = obj->romanToInt(s);
        // cout << (obj->intToRoman(val)) << endl;
        obj->intToRoman(val);
        cout << endl;
    }

}