#include <stdio.h>
#include <string.h>
#define VAL 32
int main(){
  char arr[] = "geeksquiz";
  printf("%d\n",~VAL);
  *(arr+0) &= ~VAL;     // AND a character with complement of 32 i.e., -33, you get uppercase letter
  printf("%c\n",*(arr));
  *(arr+5) &= ~VAL;
  printf("%s\n",arr);
  printf("%c\n",('c'&-33));
  return 0;
}
