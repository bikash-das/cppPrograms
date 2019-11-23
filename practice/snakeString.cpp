#include <iostream>
#include <string>

using namespace std;
string snake_string(const string& input){
	string res="";
	for(int i = 1; i < input.size(); i += 4){
		res += input[i];
	}
	for(int i = 0; i < input.size(); i += 2){
		res += input[i];
	}
	for(int i = 3; i < input.size(); i += 4){
		res += input[i];
	}
	return res;
}
int main(){
	string input;
	cout <<  "Enter input: ";
	getline(cin, input);
	cout << "Snake string: " << snake_string(input) << "\n";
}


