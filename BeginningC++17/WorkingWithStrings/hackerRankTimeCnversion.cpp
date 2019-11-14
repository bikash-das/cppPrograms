#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */

string timeConversion(string s) {
    /*
     * Write your code here.
     */
    stringstream ss {};
    string hour {s,0,2};
    //  string hour = stoi(string(s,0,2));
     string ampm {s,s.length()-2,s.length()};
     if(ampm == "PM"){
        //  hour += 12;
         int hr = stoi(hour) + 12;  
         if(hr == 24){
             hr = 12;
         }       
         ss << hr;
         string rem {s,2,s.length()-4};
         ss << rem;
     }else{
         if(hour == "12"){
             hour = "00";
         }
         ss << hour;
         string rem {s,2,s.length()-4};
         ss << rem;
     }
   
     return ss.str();

}

int main()
{
    string s;
    std::getline(cin, s);

    string result = timeConversion(s);

    cout << result;

    return 0;
}
