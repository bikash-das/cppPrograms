#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
using namespace std;
void printKMax(deque<int>& q, int n, int k){
    int so_far_max = 0;
    so_far_max = *max_element(begin(q),begin(q)+k);

    while(q.size() >= k){
        // copy(begin(q), begin(q)+k, ostream_iterator<int> {cout, " "});
        cout  << *max_element(begin(q),begin(q)+k) << " ";
        q.pop_front();
    }
    cout << "\n";
}
int main(){
    int t;
    scanf("%d",&t);
    int n,k;
    while(t--){
        scanf("%d%d",&n,&k);
        deque<int> q;  //input lene k liye nahi use karna hai, input array mein lo
        int input;
        for(int i = 0; i<n;i++){
            scanf("%d",&input);
            q.push_back(input);
        }
        printKMax(q,n,k);
    }
}
