#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    using ll = long long;
    int Q;
    cin >> Q;
    int type;
    map<string,int> mymap;
    string name;
    int marks;
    for(int i = 0; i<Q; i++){
        cin >> type;
        if(type == 1){
            cin >> name >> marks;
            if(mymap.find(name) != mymap.end()){
                mymap[name] = mymap[name] + marks;
            }else{
                mymap[name] = marks;
            }
        }else if(type == 2){
            cin >> name;
            mymap.erase(name);
        }else if(type == 3){
            cin >> name;
            if(mymap.find(name) != mymap.end()){
                cout << mymap[name] << "\n";
            }else{
                cout << "0" << "\n";
            }
        }
    }
}