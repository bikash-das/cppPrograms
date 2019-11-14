#include <iostream>
#include <vector>
#include <string>
using namespace std;

// prototype declaration
template <typename T> T min(const T data[], size_t count);
template <typename T> T min(const vector<T>& data);
template <typename T> T* min(T*, T*); // for pointer args

int main(){
    int big_int {17011232} , small_int {10};
    cout << "smaller of " << big_int << " and " << small_int << " is " << 
                min(big_int,small_int) << '\n';
    
    cout << " smaller of " << big_int <<  " and " << small_int << " is " <<
                *min(&big_int,&small_int) << " \n";
   
    
    vector<string> words { "The", "higher", "the", "fewer"};
    cout << "The min word in words is \"" << min(words) << '"' << "\n";
}
template <typename T> T min(const T data[], size_t count){
  
    T res {data[0]};
    for(const auto& v : data){
        if(v < res)
            res = v;
    }
    return res;
}
template <typename T> T min(const vector<T>& data ){
 
    T res {data[0]};
    for(auto& v : data){
        if(v < res){
            res = v;
        }
    }
    return res;
}
template <typename T>
T* min(T* a, T* b){
    return *a > *b ? a : b;
}

