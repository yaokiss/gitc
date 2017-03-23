#include <stdio.h>

int main(void){
  int i,j,k,k1,k2,k3;
  i = 1;
  j = 2;
  k = i++ + j++;  //先运算i(1)+j(2)，然后i(2)，j(3)自增！
  i = 1;
  j = 2;
  k1 = ++i + j++;   //i(2)先自增 ，运算i(2)+j(2)， 然后j(3)自增！
  i = 1;
  j = 2;
  k2 = ++i + ++j;   //i(2)，j(3)先自增，然后运算i(2)+j(3)！
  i = 1;
  j = 2;
  k3 = i++ + ++j; //先j(3)自增，运算i(1)+j(3) 然后i(2)自增！
  printf("i = %d  j = %d  k = %d\n", i, j, k);
  printf("i = %d  j = %d  k1 = %d\n", i, j, k1);
  printf("i = %d  j = %d  k2 = %d\n", i, j, k2);
  printf("i = %d  j = %d  k3 = %d\n", i, j, k3);
  return 0;
}
