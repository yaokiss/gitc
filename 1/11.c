#include <stdio.h>

int main(void)
{
    int a ;
    int b ;
    printf(" ‰»Î:");
    scanf("%d", &a);
    while (a != 0)
    {
       b = a % 10;
       printf("%d", b);
       a = a / 10;
    }
    printf("\n");
    return 0;
}
