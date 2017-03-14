#include <stdio.h>

int main(void)
{
    int i = 1 ;
    int j = 1 ;
    int sum ;
    for(i = 1; i < 10; i++)
    {
        for( j = 1; j <= i; j++)
        {
            sum = i * j;
            printf("%d * %d = %d\t",j, i,sum);
        }
        printf("\n\n");
    }

}
