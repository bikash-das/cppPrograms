#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("Enter n?\n");
  scanf("%d",&n);
  // int *arr = (int *) malloc(n*sizeof(int));
  int arr[n];
  for(int i = 0; i < n ; i++)
    arr[i] = 10;
  for(int i = 0; i< n ;i++)
    printf("%d ",arr[i]);
}
