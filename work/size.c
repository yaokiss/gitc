#include <stdio.h>

int main (void)
{
    int a = 1;
    int b = 2;
    int c = 3;
    
    printf("a = 1, b = 2, c = 3\n");
    if(a > b)
    { 
        if(a > c)
        {
            printf("a = %d\n",a);
        }
        else
        {
            printf("c = %d\n",c);
        }
    }
    else
    {
        if(b > c)
        {
           printf("b = %d\n",b);
        }
        else
        {
            printf("c = %d\n", c);
        }
    }
       return 0;

}
