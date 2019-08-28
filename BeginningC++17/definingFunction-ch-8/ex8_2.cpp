/*
Exercise 8-2. Write a function that reads a string or array of characters as input and
reverses it. Justify your choice of parameter type? Provide a main() function to test
your function that prompts for a string of characters, reverses them, and outputs the
reversed string.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse_string(string& s){
   string rev = "";
   for(int i = s.length()-1; i >=0; i--)
        rev += s.at(i);
    return rev;
}
int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << reverse_string(s) << "\n";
}
