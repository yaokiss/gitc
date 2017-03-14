#include <stdio.h>

int main(void){
  int a[5] ={1,23,10,89,35};
  int max;
  int i;

  for(i = 0 ;i < 5; i++){
    if(a[i] > max)
    {
            max = a[i];
    }
}
    printf("max = %d",max);

  printf("\n");
  return 0;
}
