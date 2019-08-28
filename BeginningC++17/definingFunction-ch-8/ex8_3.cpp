/*
    Exercise 8-3. Write a program that accepts from two to four command-line arguments.
    If it is called with less than two or more than four arguments, output a message telling
    the user what they should do and then exit. If the number of arguments is correct,
    output them, each on a separate line.
*/
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
    if(argc < 2 || argc > 4){
        cout << "you should enter argc less than two or more than four arguments\n";
        exit(0);
    }
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    return 0;
}