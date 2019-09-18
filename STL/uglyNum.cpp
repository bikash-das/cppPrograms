#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>
// #include <iomanip>
using namespace std;
class Solution{
private:
    vector<int> getPrimeFactors(int num){
        vector<int> res {};
        int i = 2;
        while(num > 1){
            if(num%i == 0){
                res.push_back(i);
                num = num/i;
            }else{
                i++;            
          }
        }
        /* return unique factors  */
        auto iter = unique(res.begin(),res.end());
        res.resize(distance(res.begin(),iter));
        return res;
    }
public:
    pair<bool,vector<int>> isUgly(int num){
        vector<int> res = getPrimeFactors(num);  //res = [2,5]
        // copy(res.begin(),res.end(),ostream_iterator<int>(cout, " "));
        vector<int> check {2,3,5};
        for(int i = 0; i < res.size(); i++){
            auto iter = find(check.begin(),check.end(),res[i]);
            if(iter == check.end()){
                return make_pair(false,res);
            }
        }
        return make_pair(true,res);
    }
};
int main(){
    Solution obj; //  created in stack
    int n;
    cin >> n;
    auto res = obj.isUgly(n);
    // cout << boolalpha << res.first << "\n";
    cout << n  << (res.first? " is Ugly Number\n" : " is Not Ugly Number\n");

    cout << n << "'s prime factors are " ;
    for(auto val : res.second){
        cout << val << " ";
    }
    cout << "\n";

    /* testing a bunch of random numbers 
   // First create an instance of an engine.
    random_device rnd_device;
    // Specify the engine and distribution.
    mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    uniform_int_distribution<int> dist {1, 10000};
    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
    };
    vector<int> v(1000000);
    generate(v.begin(),v.end(),gen);


    for(int i = 0; i < 1000000;i++){
        auto res = obj.isUgly(v[i]);
        // if(res.first){
            cout << v[i] << " " << boolalpha << res.first << " : ";
            for(auto v : res.second)
                cout << v << " ";
            cout << "\n";
        // }
        
    }
    */
}