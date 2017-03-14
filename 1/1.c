#include <stdio.h>

int main(void)
{
    int a = 121 ;
    int b = 2312 ;
    int c = 31 ;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
/*    if (a > b )
    {
        printf("a = %d\n",a);
        
        if(a > c)
        {
            printf("c = %d\n", c);      // 注释的也可以算出最大，
                                           算真，不算假。
        }
    }
        
        if(b > c)
        {
            printf("b = %d\n",b);
        }
*/
    if (a > b )
    {
        if (a > c )
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
        if (b > c)
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
