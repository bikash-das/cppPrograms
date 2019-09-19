#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
using namespace std;

class Solution{
    public:
        auto sieve_primes(int n){
            deque<bool> is_prime(n+1,true); //set all true
            vector<int> primes;
            for(int i = 2; i < n; i++){
                if(is_prime[i]){
                    primes.emplace_back(i);
                    // make false all multiple of i
                    for(int j = i; j <= n; j+=i){
                        is_prime[j] = false;
                    }
                }
            }
            return primes;
        }
};
int main(){
    int n;
    cin >> n;
    Solution* obj = new Solution();
    auto res = obj->sieve_primes(n);
    copy(res.begin(),res.end(),ostream_iterator<int>(cout, " "));
    cout << "\n";
}