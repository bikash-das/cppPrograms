#include<iostream>
#include<string>
#include <stack>
#include <fstream>
using namespace std;
// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> st;    
    for(int i =0; i<s.length(); i++){
        char c = s[i];
        if((c=='{') || (c=='[') || (c=='(')){
            st.push(c);
        }else{
            if(!st.empty()){
                char recent = st.top();
                st.pop();
                if(c == '}'){
                    if(recent != '{')
                        return string("NO");
                }else if(c == ']'){
                    if(recent != '[')
                        return string("NO");
                    
                }else if(c==')'){
                    if(recent != '(')
                        return string("NO");
                }
            }           
        }
    }
    if(!st.empty()){
        return string("NO");
    }else{
        return string("YES");
    }

}
int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i<n; i++){
        cin >> s;
        cout << isBalanced(s) << "\n";
    }
}