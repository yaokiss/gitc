#include <stdio.h>

int main(void)
{
    int a ; 
    int i = 0 ;
    a = getchar();
   
    while(a != EOF)
    {
        if(i == 0)
        {
            if (a == '%')
            {
                i++;
            }
            else
            {
                printf("%c",a);
                i = 0;
            }
        }
        else if(i == 1)
        {
            if(a == '1')
            {
                i++;
            }
            else
            {
                printf("%%");
                printf("%c",a);
                i = 0;
            }
        }
        else if(i == 2)
        {
            if(a == '2')
            {
                i++;
            }
            else
            {
                printf("%%");
                printf("1");
                printf("%c",a);
                i = 0;

            }
        }
        else if(i == 3)
        {
            if(a == '3')
            {
                i++;
            }
            else
            {
                printf("%%");
                printf("1");
                printf("2");
                printf("%c",a);
                i = 0;
            }
        }
        else if(i == 4)
        {
            if(a == '4')
            {
                printf(" * ");
                i = 0;
            }
            else
            {
                printf("%%");
                printf("1");
                printf("2");
                printf("3");
                printf("4");
                printf("%c",a);
                i = 0;
            }
        }
        a = getchar();
    }
    printf("\n");

    return 0;
}
