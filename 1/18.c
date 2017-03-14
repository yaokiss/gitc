#include <stdio.h>

int main(void)
{
  
/*
  printf("     *\n\n");
  printf("    ***\n\n"); 
  printf("   *****\n\n"); 
  printf("  *******\n\n"); 
  printf("   *****\n\n"); 
  printf("    ***\n\n"); 
  printf("     *\n\n");
*/  


    int n = 8;
    int i ;
    int j ;
    int a ;
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i ; j--)
        {
            printf(" ");
        }
        for(a = 1; a <= 2 * i - 1; a++)
        {
           printf("*");
        }
        printf("\n\n");
    }
   
    for(i = n-1 ; i >= 1; i--)
    {
        for(j = i; j <= n - 1; j++)
        {
            printf(" ");
        }
        for(a = 1; a <= 2 * i - 1;a++)
        {
            printf("*");
        }
            printf("\n\n");
    }






  return 0;
}
