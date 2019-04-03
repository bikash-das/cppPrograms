#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void header(vector<ull>& maxlengthArray, ull& m){
    for(ull i = 0; i < m; i++){
        cout<<"+";
        for(unsigned j = 1; j<=maxlengthArray[i]; j++){
            cout<<"-";
        }
        cout<<"--"; //for spaces
    }
    cout<<"+\n";
}
bool checkSlash(string s){
    for(unsigned long long i = 0; i<s.length(); i++){
        if(s[i] == '/'){
            return true;
        }
    }
    return false;
}
/* for left alignment and right alignment based on type of data */
void left_align(ull w, string value){
    cout.setf(ios::left);
    cout.width(static_cast<ll>(w));
    cout<<value;
    cout.unsetf(ios::left);
}
void right_align(ull w, string value){
    cout.setf(ios::right);
    cout.width(static_cast<ll>(w));
    cout<<value;
    cout.unsetf(ios::right);
}
/* *********************************************************** */

void setData(vector<string>& s){
    for(unsigned long long i = 0; i<s.size(); i++){
        cin>>s[i];
    }
}

int main()
{
        ll t;
        cin>>t;
        while(t>0)  {
        ull m, n;

            //cout<<"Enter no of attribute and values\n";
            cin>>m>>n;
            n=n+1;

            vector <string> s(m*n);
            setData(s);

            vector <ull> maxlengthArray(m);
            for(ull i = 0; i < m*n; i++){
                if(maxlengthArray[i%m] < s[i].length()){
                    maxlengthArray[i%m] = s[i].length();
                }
            }
            // decide type of values

            vector <char> types(m);
            unsigned long long j = 0;
            for(unsigned long long i = m; i < 2*m; i++){
                if(!checkSlash(s[i]) && isdigit(s[i][0])){
                    types[j] = 'n';
                }else{
                    types[j] = 's';
                }
                j++;
            }
            //header
            header(maxlengthArray,m);

            for(ull i = 0; i<m; i++){
                cout<<"| ";
                left_align(maxlengthArray[i],s[i]);
               cout<<" ";
                if(i == m-1){
                    cout<<"|";
                     cout<<endl;
                }
            }
            header(maxlengthArray,m); //header() call
            ull v = 0;
            for(ull i = m; i < s.size(); i++){
                cout<<"| ";
                if(types[v] == 's'){
                   left_align(maxlengthArray[v],s[i]);
                 } else{
                     right_align(maxlengthArray[v],s[i]);
                }
                cout<<" ";
                v++;
                if(v == m){
                    v = 0;
                    cout<<"|";
                    cout<<endl;
                }
            }
            for(ull i = 0; i < m; i++){
                cout<<"+";
                for(ull j = 1; j<=maxlengthArray[i]; j++){
                    cout<<"-";
                }
                cout<<"--"; //for spaces
            }
            cout<<"+\n";
            t=t-1; //no of test cases
            }
}
