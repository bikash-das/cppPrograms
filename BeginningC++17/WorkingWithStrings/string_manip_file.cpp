#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void replace_word(string& target_word, string& replace_with, string& file_data){
    int found = file_data.find(target_word);
    if(found == string::npos){
        return;
    }
    while(found != string::npos){
        file_data.replace(found, target_word.size(), replace_with);
        found = file_data.find(target_word, found+1);
    }
}

int count_target_word(string& target_word, string& file_data){
    int found = file_data.find(target_word);
    if(found == string::npos){
        return 0;
    }
    int count = 0;
    while(found != string::npos){
        count ++;
        found = file_data.find(target_word, found+1);
    }
    return count;
}

int main(){
    // read the file
    ifstream inFile;
    string line;
  
    inFile.open("original.txt");
    if(!inFile){
        cout << "Error opening file\n";
        return 1;
    }
    string data;
    while (getline(inFile, line) ) {
        data += line+"\n";
    }
    inFile.close();
    // the file data is stored in variable data
    string target_word, replacement_word;
    cout << "Enter target word: ";
    cin >> target_word;
    cout << "Count of target_word (" << target_word << ") is " << count_target_word(target_word, data) << "\n";
    
    cout << "Enter replacement word: ";
    cin >> replacement_word;

    replace_word(target_word, replacement_word, data);
   
    string email;
    cout << "Enter email: ";
    cin >> email;
    string replace_email_with;
    cout << "Enter replacement email: ";
    cin >> replace_email_with;

    replace_word(email, replace_email_with, data);

    // output: data. (dump data into a new file 

    ofstream outFile;
    outFile.open("output.txt");
    outFile << data;
    outFile.close();    
}