#include <iostream>
#include <string>
using namespace std;

int decode_col(const string& col){
	int result = 0;

	for(char c : col){
		result = result * 26 + c - 'A' + 1;
	}
	return result;
}
int main(){
	string s; 
	cout << "Enter coloum name to decode: " ;
	cin >> s;
	cout << "Result: " << decode_col(s) << "\n";
}


