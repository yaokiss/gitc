#include <stdio.h>

int main(void)
{
  int a[9] ={1,2,3,4,5,6,7,8,9};
  int sum = 0;
  int i, num;
  for(i = 0; i < 9; i++)
  {
    num = a[i];
    sum = num + sum;
    printf("num = %d\n  sum = %d\n", num, sum);

  }
  printf("\n");
  return 0;
}
