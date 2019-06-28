#include <stdio.h>
#include <time.h>
#include <string.h>
int main(){
  char *ctime(const time_t *timer);
  printf("%s",(char*)ctime);
}
