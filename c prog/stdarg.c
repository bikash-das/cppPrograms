#include <stdio.h>
#include <stdarg.h>

int fun(int n, ...){
  int i,j = 1, val = 0;
  va_list p; //pointer to an argument list
  va_start(p,n); //p points at the first var-argument
  for(; j<n; ++j){  //runs for j values 1,2,3, exits when j = 4
    i = va_arg(p,int);  //we call it with a va-list i.e 'p' and a type, (int)
     // will return (int) *p => 1 then 2 then 3, since we pass 1,2,3
     // p += sizeof(int)    and increment the pointer to the next number
    val += i; //we add the values, i has value pointed by *p which is 1, for 1st iteration, ...
  }
  va_end(p); //release the resource
  return val;
}
int main(){
  printf("%d\\n",fun(4,1,2,3));
  printf("\n"); //added 
  return 0;
}
