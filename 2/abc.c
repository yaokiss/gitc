#include <stdio.h>

int main(void)
{
    int i ;
    int j = 0;
    i = getchar();
    while (i != EOF)
    {
        if(j == 0)
        {
            if(i == 'a')
            {
                i++;
            }
            else
            {
                printf("%c",i);
                i = 0;
            }
        }
       else if (j == 1)
        {
            if(i == 'b')
            {
                i++;
            }
            else
            {
                printf("a");
                printf("%c",i);
                i = 0;
            }
        }
        else if (j == 2)
        {
            if (i == 'c')
            {
                i++;
            }
            else
            {
                printf("a");
                printf("b");
                printf("%c",i);
                i = 0;
            }
        }
        else if(j == 3)
        {
            if(i == 'a')
            {
                i++;
            }
            else
            {
                printf("a");
                printf("b");
                printf("c");
                printf("%c",i);
                i = 0;
            }
        }
        else if(j == 4)
        {
            if(i == 'b')
            {
                printf(" * ");
            }
            else
            {
                printf("a");
                printf("b");
                printf("c");
                printf("a");
                printf("%c",i);
                i = 0;
            }
        }
        i = getchar();
    }
       printf("\n");
    return 0;
}
