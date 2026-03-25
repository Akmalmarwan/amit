#include <stdio.h>

int main()
{
  int x = 0, y = 0;
  printf("enter a 2 numbers : \n");
  scanf("%d",&x);
  scanf("%d",&y);

  if (x > y) {
    printf("%d is bigger\n",x);
    printf("they aren't equal\n");
  }
  else if (x < y) {
    printf("%d is bigger\n",y);
    printf("they aren't equal\n");
  }
  else if (x == y) {
    printf("they are equal\n");

  }

}
