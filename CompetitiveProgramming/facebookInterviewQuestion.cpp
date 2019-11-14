#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

//this solution is wrong, use dp and memoization and recursion :(

int main(){
    unordered_map<int, char> charSet;
    char c = 'a';
    for(int i = 1; i <= 26; i++){
        charSet[i] = c++;
    }
    
    for(int i =1; i <= 26; i++){
        cout << charSet.at(i) << " ";
    }
    cout << "\n";
    string data;
    cout << "Enter data: ";
    cin >> data;
    if(!data.empty() && data!="\n"){
        if(stoi(data) >= 1 && stoi(data) <= 26){
                //valid letter
                cout << charSet[stoi(data)] << "\n";
            }
            if(data.length() > 1){
            for(char c : data){
                    int getInt = c - '0';
                    cout << charSet.at(getInt);
                }
            }
    }
   
    

}