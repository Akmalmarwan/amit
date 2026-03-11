#include <stdio.h>

int main(){


  int x = 0, z = 1, ones = 0 , zeros = 0;
  printf("enter a number : ");
  scanf("%d",&x);

  for (int i = 0; i < 32; i++) {

    
    if (((x>>i) & 1) == 1) {
      ones++;
    }
    else {
      zeros++;
    }
  }


   printf("ones = %d\nzeros = %d",ones,zeros);

  return 0;
}
