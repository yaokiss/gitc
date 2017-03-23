#include <stdio.h>

int add(int a, int b){

  int sum = a + b;
  return sum;
}
void ad(int i , int j){
  int a = i * j;
  printf("%d\n",a);
}
int q(void){
  int o = 7, p = 9,l;
  l = o * p;
  printf("%d\n",l);
return l;
}
void recursion(){
  int a = 3, b = 4;
  int z = a * b;
  recursion();
printf("%d\n",z);
}
int main (){
  int a = add(10,20);
  ad(8,9);
  q();
  recursion();
    printf("%d\n",a);
}
