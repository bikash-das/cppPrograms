#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
using namespace std;
void printKMax(deque<int>& q, int n, int k){
       for(int i = 0; i<= n-k; i++){
        // copy(begin(q), begin(q)+k, ostream_iterator<int> {cout, " "});
        cout  << *max_element(begin(q),begin(q)+k) << " ";        
    }
    cout << "\n";
}
int main(){
    // deque<int> q{3, 4, 5, 8, 1, 4, 10};
    // copy(begin(q), end(q), ostream_iterator<int> {cout, " "});
    // cout << "\n";
    // printKMax(q,q.size(),4);
    int t;
    scanf("%d",&t);
    int n,k;
    while(t--){
        scanf("%d%d",&n,&k);
        deque<int> q;
        int input;
        for(int i = 0; i<n;i++){
            scanf("%d",&q[i]);
        }
        printKMax(q,n,k);
    }
}
