#include <stdio.h>

int main(void)
{
    int max = 5;
    int tmp;
    int  a[5] = {123, 1312, 413, 34, 542};
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0;j < i;j++)
        {
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp
        }

    }
    return 0;
}
