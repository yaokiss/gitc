#include <stdio.h>

int main(void)
{
    int a = 111;
    int b = 112;
    int c = 33;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    if(a < b)
    {
        if (a < c)
        {
            printf("a = %d\n", a);
        }
        else
        {
            printf("c = %d\n", c);
        }
    }
    else
    {
        if(b < c)
        {
            printf("b = %d\n", b);
        }
        else
        {
            printf("c = %d\n", c);
        }
    }



    return 0;
}
