#include <stdio.h>


int main(void)
{
    int i ;
    int j ;
    int temp;

    for(i = 50; i <= 100; i++)
    {
        for(j = 2; j < i ; j++)
        {
            if(i % j == 0)
            {
                 break;
            }
        }
    
    
    if (j == i)
    {
        printf("%d = 1 * %d\n", i, i);
        continue;
    }
    temp = i;
    printf("%d = ", temp);
    
    for(j = 2; j < i; j++)
    {
        for (; temp % j == 0;)
        {
            printf("%d", j);

            temp = temp / j;

            if (temp != 1)
            {
                printf("*");
            }
        }
    } 
        printf("\n");
    }
    return 0;
}
