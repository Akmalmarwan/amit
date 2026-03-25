#include <stdio.h>


int main (){

  int x,y;

  printf("enter number 1 : ");
  scanf("%d",&x);

  printf("enter number 2 : ");
  scanf("%d",&y);

  int sum = x + y;
  int sum_sub = x - y;
  int total = x  * y ;
  float total_divide = (float)x / y;

  printf("\nsum = %d\n", sum);
  printf("subtract = %d\n", sum_sub);
  printf("total = %d\n", total);
  printf("divide = %.2f\n", total_divide);

  return 0 ;
}
