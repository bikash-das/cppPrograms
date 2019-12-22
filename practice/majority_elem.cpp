#include <bits/stdc++.h>
int main(){
    std::vector<int> vec {4,4,4,4,4,4,4,4,4,7,5,3,7,4,3,1,4,5,6,3,1};
    std::sort(vec.begin(),vec.end());
    int major_elem = vec[vec.size()/2];
    // majority elem count must be n/2 + 1 
    int count = std::count(vec.begin(), vec.end(), major_elem);
    if(count >= (vec.size()/2 + 1)){
        std::cout << "Majority element is " << major_elem << " and it's count is " << count << std::endl;
    } else {
        std::cout << "Majority element does not exist" << std::endl;
    }

}