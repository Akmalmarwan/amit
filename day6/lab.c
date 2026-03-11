#include <stdio.h>

int main()
{

  int x = 0;
  printf("enter a number : ");
  scanf("%d",&x);

  int count = 0;
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      count++;
    }
  }

  if (count == 2) {
    printf("prime number\n");
  
  }
  else {
    printf("not prime number\n");
  }

  return 0;
}
