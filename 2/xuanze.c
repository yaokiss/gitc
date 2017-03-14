#include <stdio.h>

int main(void)
{
    int a[6]= {12,124,234,1231,345,645};
    int i,j,h;
    for(i = 0; i < 6; i++)
    {       h = i;
      for(j = i + 1; j < 6 ; j++)
      {
            h = j;
      }
      h = a[i];

    }
    printf("\n");
    return 0;
}
