#include <stdio.h>

int main(void)
{

    int a = 1234567890;
    int sum = 0;
    printf("a = %d\n", a);
  for(;a > 0;)
  {
      a = a / 10;
      sum = sum + 1;
  }

      printf("sum = %d\n",sum);
  
    
    return 0;
}
