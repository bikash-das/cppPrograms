/* RPM increases or decreases every year.
    a. multiply the number 323 to sum of the squares of the digits of the RPM.
    b. shift the digits of the RPM to the right by 1 position in a cyclic way,
    c. extract the last two digits of the new number obtained and add to the result
       obtained in 'a'. The final result (c) is the new RPM
    d. Do these steps till the numbers of years are 10 or the harddisk has reached
    the maximum RPM
    e. Finally assign the modified value i.e., the final of RPM to the
       variable 'finalRPM'
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using ll = long long;
using namespace std;
/* **************************** 1,2 **************************/
ll sum_squares(ll rpm){
    ll dig,s=0;
    while(rpm > 0){
        dig = rpm % 10;
        s += dig*dig; /* sum of the squares of the digits */
        rpm /= 10;
    }
    return s;
}
ll multiply_sum_squares (ll rpm){
    ll sq = sum_squares(rpm);
    return 323 * sq;
}
/* **************************** 1,2 ************************** */
/* **************************** 3,4 **************************/
ll getDigitCount(ll rpm){
    ll c = 0;
    while(rpm > 0){
        c++;
        rpm /= 10;
    }
    return c;
}
ll two_digits(ll rpm){
    ll last = rpm % 10;
    rpm /= 10;
    ll second_last = rpm % 10;
    return second_last * 10 + last;
}

ll cyclic_shift (ll rpm){
    ll digit_count = getDigitCount(rpm);
    ll last_digit = rpm % 10;
    ll value_to_add = last_digit * pow(10,digit_count-1);
    ll crs = value_to_add + (rpm/10);        /* cyclic right shift final value */
    return two_digits(crs) + multiply_sum_squares(rpm);
}
/* **************************** 3,4 **************************/

int main(){
    ll rpm;
    cout << "Enter initial rpm: ";
    cin >> rpm;
    ll max_limit = rpm * 8;
    int i;

    cout << "------------------------\n";
    cout << setw(5) << "RPM" << setw(7) << "Years" << setw(10) << "Next RPM" << "\n";
    cout << "------------------------\n";

    for(i = 1; i <= 10 && rpm <= max_limit; i++){
        ll new_rpm = cyclic_shift(rpm);
        /* print now */
        cout << setw(5) << right << rpm << setw(7) << right << i << setw(10) << right << new_rpm << "\n";
        rpm = new_rpm;
    }
    cout << endl;

    ll finalRPM = rpm;
    cout << "finalRPM = " << finalRPM << endl;
}
