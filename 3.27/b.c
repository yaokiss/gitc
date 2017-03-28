#include<stdio.h>
main()
{
int n, m;
int print_space(int n);
int print_star(int m);
print_space(4);
print_star(3);
print_space(15);
print_star(3);
printf("\n");
print_space(1);
print_star(9);
print_space(9);
print_star(9);
printf("\n");
print_star(11);
print_space(7);
print_star(11);
printf("\n");
print_star(12);
print_space(5);
print_star(12);
printf("\n");
print_star(13);
print_space(3);
print_star(13);
printf("\n");
print_star(14);
print_space(1);
print_star(14);
printf("\n");
print_space(1);
print_star(7);
print_space(3);
print_star(3);
print_space(1);
print_star(3);
print_space(3);
print_star(7);
printf("\n");
print_space(2);
print_star(6);
print_space(4);
print_star(5);
print_space(4);
print_star(6);
printf("\n");
print_space(3);
print_star(6);
print_space(4);
print_star(3);
print_space(4);
print_star(6);
printf("\n");
print_space(4);
print_star(6);
print_space(4);
print_star(1);
print_space(4);
print_star(6);
printf("\n");
print_space(7);
print_star(6);
print_space(1);
print_star(1);
print_space(1);
print_star(6);
printf("\n");
for (int c = 8, d = 12; d > 0; d=d-2, c++)
{
print_space(c);
print_star(d);
printf("\n");
}

}

int print_space(int n)
{
for (int a = 1; a <= n; a++)
{
printf(" ");
}
}

int print_star(int m)
{
for (int b = 1; b <= m; b++)
{
printf("*");
}
}
