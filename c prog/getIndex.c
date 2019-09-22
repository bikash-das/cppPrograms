#include <stdio.h>
#include <ctype.h>
int main(){
    char a[20];
    char b;
    int i,n;
    printf("Enter total no of character to insert: ");
    scanf("%d",&n);
    for(i = 0; i < n; ){
        scanf("%c",&b);
        if(isalpha(b)){
            a[i++] = b;
        }
    }
    printf("You Entered: ");
    for(i=0;i<n;i++){
        printf("%c ",a[i]);
    }
    printf("\nEnter a character to get it's index: ");
    scanf(" %c",&b);
    for(i = 0; i < n; i ++){
        if(b == a[i]){
            printf("Character found at index: %d\n",i);
            break;
        }
    }
    if(i==n){
        printf("Doesn't exist\n");
    }
}