#include <iostream>
#include <algorithm>
#include <vector>
void print(std::vector<int>& v){
    std::cout << "Vector elements: ";
    for(auto& val : v){
        std::cout << val << " ";
    }
    std::cout << "\n";
}
void count_unique(const std::vector<int>& v){
    std::cout << "Printing unique elements: ";
    int seen = 0;
    int count = 0;
    for(auto& val : v){
        if(seen == val){
            continue;
        }
        std::cout << val << " ";
        count++;
        seen = val;
    }
    std::cout << "\n";
    std::cout << "Unique Count: " << count << "\n";
}
int main(){
    std::vector<int> v{90,1,5,3,3,2,2,6,1,3,9,34};
    print(v);
    std::sort(v.begin(),v.end());  // nlogn
    count_unique(v);
   
}
