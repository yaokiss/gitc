#include <stdio.h>

int main(void){
  /*int a = 10;
  char b = 'b';
  printf("&a = %p\n", &a);
  printf("&b = %p\n", &b);
*/

int *p;
double *p1;
float *p2;
char *p3 = NULL;

int a = 10;
double b = 13.11;
float c = 1.23;


p = &a;
p1 = &b;
p2 = &c;

printf(" p = %p\n p1 = %p\n p2 = %p\n p3 = %p\n",p, p1, p2, p3);












  return 0;
}
