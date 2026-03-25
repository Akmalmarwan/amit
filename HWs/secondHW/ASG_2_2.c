#include <stdio.h>

int main()
{
  int n = 0, total = 1, remain = 0, count = 0, pow = 0, sum, x = 0;

  printf("enter a number : "); // more than 2 digits to count it to test the program
  scanf("%d",&n);
  int t = n ;

  for (int i = 0; i < 32; i++) {
    if (t != 0) {
      t = t / 10; 
      count++;
    }
  }

  for (int i = 0;i < count ;i++) {
    // pow += count;
  }

  t = n;
  for (int i = 0; i < count; i++) {
    
    remain = t%10;
    t = t / 10;
    for (int j = 0 ; j < count ; j ++) {
      total *= remain;
    }
    sum += total;
    total = 1;

  }

  if (sum == n) {
    printf("this is an armstrong number\n");
  }
  else {
    printf("this is not an armstrong number\n");
  }
}
