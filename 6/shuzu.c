#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
/*
int *p;
  int b;
  p = a;
  printf("p = %p\n", p);
  for(b = 0;b < 10; b++){

    printf("a[%d] = %d \t %p\n",b, *p, p);
    p++;
  }
*/
  char *i;
  int j;
  i = a;
  for(j = 0; j < 10; j++){
    printf("a[%d] = %d \t %p\n", j, *i, i);
    i = i + 4;

  }

  return 0;
}
