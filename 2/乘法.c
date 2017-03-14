#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;
    int sum ;
    while(i < 10)
    {
     
        for(j = 1;j <= i;j++)
        {
            
         sum = i * j;
         printf("%d * %d = %d\t", j,  i, sum);
        }
         i++;
         printf("\n");
    }
    return 0;
}
