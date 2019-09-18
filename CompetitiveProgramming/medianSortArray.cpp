#include <bits/stdc++.h>
using namespace std;
class medianSortArray{
private:
    vector<int> vec1, vec2;
public:
    medianSortArray(vector<int> temp1, vector<int> temp2):vec1(temp1),vec2(temp2){}
    double findMedian(){
        if(vec1.size() > vec2.size()){
            return medianSortArray(vec2,vec1).findMedian();
        }
        int lenVec1 = vec1.size(), lenVec2 = vec2.size();
        int low = 0, high = lenVec1;
        while(low <= high){
            int pX = (low + high) / 2;  //partitionX
            int pY = (vec1.size() + vec2.size() + 1) / 2 - pX;
            /*  edge cases : if pX is 0 means nothing in 
              left side and if pY is x means nothing in right side */
            int maxleftX = (pX == 0) ? INT_MIN : vec1[pX-1];
            int minRightX = (pX == lenVec1) ? INT_MAX : vec1[pX];
            int maxleftY = (pY == 0) ? INT_MIN : vec2[pY - 1];
            int minRightY = (pY == lenVec2) ? INT_MAX : vec2[pY];

            if((maxleftX <= minRightY) && (maxleftY <= minRightX)){
                if((lenVec1+lenVec2)%2 == 0){
                    return static_cast<double>((max(maxleftX,maxleftY)
                                + min(minRightX,minRightY)) / 2.0);
                } else {
                    return static_cast<double>(max(maxleftX, maxleftY));
                }
            } else if (maxleftX > minRightY) {  
                high = pX - 1;
            } else {
                low = pX  + 1;
            }
        }   
    }
};

void getValues(vector<int>& vec,int n){
    int input;
    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++){
        cin >> input;
        vec.push_back(input);
    }
}
int main(){
    int n;
    cout << "Enter size of vec1: ";
    cin >> n;
    vector<int> vec1;
    getValues(vec1,n);

    cout << "Enter size of vec2: ";
    cin >> n;
    vector<int> vec2;
    getValues(vec2,n);
    medianSortArray obj(vec1,vec2);
    cout << "Median of two sorted vectors: " << obj.findMedian() << "\n";
}
