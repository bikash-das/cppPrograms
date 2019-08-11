#include <stdio.h>
#include <ctype.h>   // for tolower() function
#include <stdlib.h>  // for exit() case number 3
int main(){
  char c,confirmation;
  int choice, number;
  do{
    printf("1.To find no is even or odd\n");                        // \n is for new line
    printf("2.To find alphabet is constant or vowel\n");
    printf("3.Exit.\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
          printf("Enter a number to check for even or odd: ");
          scanf("%d",&number);
          if(number % 2 == 0){
            printf("Even\n");
          } else{
            printf("Odd\n");
          }
      break;
      case 2:
          printf("Enter a character: ");
          scanf(" %c",&c);   // before %c there is space. It's required. try removing the space and run the program. You will find the difference.
          c = tolower(c); // convert to lowercase, simply for checking
          if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("Vowel\n");
          }
          else{
            printf("Consonant\n");
          }
        break;
        case 3:
          exit(0);  // stop the program

        default:
          printf("Wrong Choice\n");
        }

      printf("\nDo you want to run the program again (y or n): ");
      scanf(" %c",&confirmation);

    } while(tolower(confirmation) == 'y');
  }
