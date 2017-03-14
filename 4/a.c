#include <stdio.h>

void *swap(int *p,int *q){
      int sum;
      sum = *q;
      *q = *p;
      *p = sum;

}
int main(void){
  int i = 10;
  int j = 20;
  printf("i = %d\t &i = %p\n j = %d\t &j = %p\n", i, &i, j, &j);
  printf("\n");
  int sum;
  swap (&i,&j);
  printf("i = %d\t &i = %p\n j = %d\t &j = %p\n", i, &i, j, &j);

  return 0;
}
