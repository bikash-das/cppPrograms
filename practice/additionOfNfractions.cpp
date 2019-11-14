#include <iostream>
#include <vector>
using namespace std;

class fraction{
	public:
		long long a;
		long long b;
};
/* gcd() accepts two number and return the gcd */
long long gcd(long long a,long long b){
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
	}
	long long rem = a % b;
	while(rem!=0){
		a=b;
		b=rem;
		rem = a % b;
	}
	return b;
}
/* lcm function accepts vector of fraction and length n and return lcm*/
long long lcm(vector<fraction>& f, long long n){  
	long long lcmValue = 1;
	for(long long i = 0; i< n; i++){
		lcmValue = (lcmValue * f[i].b)/gcd(lcmValue,f[i].b);
	}	
    return lcmValue; 
} 
/* addfraction() accepts a vector of fraction and length n and returns the fraction sum */
fraction addfraction(vector<fraction>& f, long long n){
	fraction result;
	result.a = 0;
	long long l = lcm(f,n);
	for(long long i = 0; i < n; i++){
		result.a += (l/f[i].b) * f[i].a ;
	}	
	result.b = l;
	return result;
}
/* inputfraction accepts a reference to a vector of fraction and length n and returns nothing 
this function is used to accepts values from users
*/
void inputfraction(vector<fraction>& f, long long n){
	for(long long i = 0; i < n; i++){
		cout<<"Fraction "<<i+1<<"\n";
		cout<<"Numberator: ";
		cin>>f[i].a;
		cout<<"Denominator: ";
		cin>>f[i].b;
		cout<<"\n";
	}	
}
void displayfraction(vector<fraction>& f, long long n, fraction& res){
	long long i;
	cout<<"\nFractions are: \n";
	for(i = 0; i < n-1; i++){
		cout<<f[i].a<<"/"<<f[i].b<<" + ";	
	}
	cout<<f[i].a<<"/"<<f[i].b<<" = "<<res.a<<"/"<<res.b;
}

int main(){
	fraction num1, num2,res;
	long long n;
	cout<<"Enter n?\n";
	cin>>n;
	if(n>0){
		vector<fraction> f(n);
		
		inputfraction(f,n); //passing vector and n fractions
		
		res = addfraction(f,n); /* calling addfraction() to add the values */
		
		long long normalize = gcd(res.a,res.b); /* finding a value if both can be divided by a common term */
		res.a = res.a/normalize;
		res.b = res.b/normalize;
		
		displayfraction(f,n,res);
	}else{
		cout<<"\n 'n' should be greater than 0\n";
	}	
}
