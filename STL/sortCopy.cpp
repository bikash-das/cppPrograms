#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main(){
  vector<int> numbers {10,20,60,40,50};
  /* sort the vector of ints  default: ascending*/
  sort(begin(numbers), end(numbers));
  /* print the sorted values in console */
  copy(begin(numbers), end(numbers),
                    ostream_iterator<int> {cout, " "});
  vector<int> v {1,2,2,3,5,3,2};
  stable_sort(v.begin(),v.end());
  copy(begin(v), end(v), ostream_iterator<int> {cout, " "});
}
