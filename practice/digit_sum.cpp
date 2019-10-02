/* two numbers given, find sum of digits for 1st number with the digits that doesn't present in the 2nd number?
  eg: 137 and 17 = 3
      137 and 7 = 1+3 = 4
*/
#include <iostream>
#include <string>
#include <cassert>
#include <set>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    try{
        assert(stol(s1) > 0 && stol(s2) > 0);
        int sum = 0;
        set<char> char_set;
        for(auto v : s2){
            char_set.insert(v);
        }
        for(auto& v : s1){
            if(char_set.find(v) != char_set.end())
                continue;
            
            sum += v - '0';
        }
        cout << sum << "\n";

    }catch(invalid_argument& e){
        cout << "Invalid Input\n";
    }catch(out_of_range& e){
        cout << "long integer range exceeded\n";
    }catch(...){
        cout << "Error in code\n";
    }
    
}
