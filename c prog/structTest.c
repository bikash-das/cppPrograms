#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>

typedef struct Horse{
  int age;
  int height;
  char name[20];
  char father[20];
  char mother[20];
}Horse;

int main(void){
  Horse my_horse;
  printf("Enter the name of the horse: ");
  scanf("%s", my_horse.name);
  printf("Name of horse: %s\n",my_horse.name);

}
