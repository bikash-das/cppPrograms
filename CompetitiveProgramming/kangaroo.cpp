// https://www.hackerrank.com/challenges/kangaroo/problem

#include <iostream>
#include <string>
using namespace std;
class kangaroo_prob{
    private:
        int x1,v1,x2,v2;
    public:
        kangaroo_prob(int a,int b, int c, int d) : 
                x1(a),v1(b),x2(c),v2(d){}
        
        string solve(){
            int a = x1;
            int b = x2;
            if((x2>x1) && (v2 > v1)){
                return string("NO");
            } else{
                for(int i = 0; i < 10000; i++){
                    a += v1;
                    b += v2;
                    if(a == b){
                        return string("YES");
                    }
                }
            }
            return string("NO");

        }
};
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    kangaroo_prob obj (a,b,c,d);
    cout << obj.solve() << "\n";

}