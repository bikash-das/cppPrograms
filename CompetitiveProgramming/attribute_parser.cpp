#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<string> getwordvector(string& sentence,string delimiter){
  vector<string> words{};
//   string delimiter {" ,;:.\"!?'\n"};
  int start = sentence.find_first_not_of(delimiter);  //starting index which is not any of delimiter
  while (start != string::npos){
    int word_end = sentence.find_first_of(delimiter, start + 1);
    if(word_end == string::npos){
      word_end = sentence.length(); //we are done
    }
    words.push_back(sentence.substr(start, word_end - start)); // extract word and push in vector
    start = sentence.find_first_not_of(delimiter, word_end + 1);
  }
  return words;
}

int main(){
    int n,q;
    string word,inputstr;
    string tagpreamble ="";
    map<string,string> mymap;
    cin >> n >> q;
    cin.ignore();
    

    string tag;
    for(int i = 0; i < n; i++){
        //take each line
        getline(cin,inputstr);

        //for each line process
        int pos;
        string extractVal;
        string attr; //atttribute
        vector<string> words= getwordvector(inputstr," ");
        //for each word vector process
        for(auto& word : words){
            //check for tag
            if(word[0] == '<'){
                // check for closing tag
                if(word[1] == '/'){
                    //it's closing tag
                    tag = word.substr(2); //extract from second pos
                    tag = tag.substr(0,tag.length()-1); //get rid of ">", if it has >
                    // if tag is not present in tagpreamble, then assign it or make it empty
                    pos = tagpreamble.find("."+tag);
                    if(pos == string::npos){
                        tagpreamble = "";
                    }else{
                        tagpreamble = tagpreamble.substr(0,pos);
                    }
                }else{
                    //it's an opening tag
                    tag = word.substr(1); //remove <
                    // tag can be empty like <tag>
                    // remove > also if present
                    if(tag.find(">") != string::npos){
                        tag = tag.substr(0,tag.length()-1); //got rid of ">"
                    }
                    if(tagpreamble == "")
                        tagpreamble = tag;
                    else{
                        //nested tag, add with dot
                        tagpreamble += "." + tag;
                    }
                }
            }else if(word[0] == '"'){
                //it's a value
                // extractVal = word.substr(1,word.length()-3);
                 pos=word.find_last_of('"');
                 extractVal = word.substr(1,pos-1);
                mymap[attr] = extractVal;
            }else if(word[0] != '='){
                // if it's not equal to = then it's a attribute
                attr = tagpreamble+"~"+word;
            }            
        }
    }
    // for(auto& val : mymap){
    //     cout << val.first << " : " << val.second << endl;
    // }
    string query;
    for(int i = 0; i<q; i++){
        cin >> query;
        if(mymap.count(query) > 0){
            cout << mymap[query] << "\n";
        }else{
            cout << "Not Found!" << "\n";
        }

    }
}