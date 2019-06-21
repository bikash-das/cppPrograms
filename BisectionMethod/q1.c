#include <stdio.h>
#include <math.h>

double function(double x){
  return (2 * x) + sin(x) - 3;
}

int main(){
  double a, b;

  //validating if our approximate values of a and b is ok!
  while(1){
    printf("Enter two initial roots a and b\n");
    scanf("%lf %lf",&a, &b);
    if(function(a) * function(b) > 0){
      printf("\nWell, you have chosen wrong initial roots\nPlease Enter Again \n");
    }else{
      //Valid two initial roots, break out of the loop
      break;
    }
  }

  // our inital values are good proceed with the algorithm
  //it is possible that one of the two inital roots chosen is the resultant root
  double final_root = 0.0;
  double mid_point = 0.0;
  int count = 0;

  if(function(a) == 0) {
    final_root = a;
  }else if(function(b) == 0) {
    final_root = b;
  }else{
    // we proceed finding the root now
    double epsilon = 0.000001;  //correct to siz decimall places
    while( ((b-a) >= epsilon)) {
      count += 1;
      mid_point = (a+b) / 2;
      if(function(mid_point) == 0.0){
        break;
      } else if(function(mid_point) * function(a) < 0) {
            b = mid_point;
      } else {
        a = mid_point;
      }
    final_root = mid_point;
    }
    printf("\nThe root is %.6lf after %d iterations\n", final_root, count);

  }
  return 0;
}
