#include <stdio.h>
#include <math.h>

double function(double x){
  return (2 * x) + sin(x) - 3;
}

double function2(double x){
  return pow(x,2) + tan(x) - 3;
}

double function3(double x){
  return pow(x,2) + atan(x) - 6;    //trignometry function returns in radians
}


int main(){
  double x;
  double result;
  x = 2.3;
  result = sin(x);
  printf("sin(%.2lf) = %.7lf\n", x, result);
  printf("%lf\n",function2(x));
  printf("%lf\n",atan(1));
  printf("%lf and %lf\n",function(1), function(2));
  printf("%lf\n", function(1) * function(2));
  return 0;
}
