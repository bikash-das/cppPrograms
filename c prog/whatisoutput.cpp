#include <stdio.h>
int main(){
  int var = 011;  //it's an octal because it starts with 0
  printf("%d\n", var);
  var = 0x11;  // 1 * 16^1 + 1 * 16^0 = 17
  printf("%d\n", var);

}
