#include <stdio.h>

int main(void)
{
    int a ; 
    a = getchar();
    while(a != EOF)
    {
        if(32 == a)
      {
        printf("%%20");
      }
        else
        {
            printf("%c",a);
        }
    a = getchar();
    }
    printf("\n");
    return 0;
}
