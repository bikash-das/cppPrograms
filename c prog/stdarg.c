#include <stdio.h>
#include <stdarg.h>

int fun(int n, ...){
  int i,j = 1, val = 0;
  va_list p; // sort of declaring a variable of pointer type to point to the arbitrary list
  va_start(p,n); // now pointer points to the first element
  for(; j<n; ++j){  //runs for j values 1,2,3, exits when j = 4
    i = va_arg(p,int);  //returns the first value and points to next element, *p
    val += i; //we add the values
  }
  va_end(p); //release the resource
  return val;
}
int main(){
  printf("%d\\n",fun(4,1,2,3));
  printf("\n"); //added
  return 0;
}
