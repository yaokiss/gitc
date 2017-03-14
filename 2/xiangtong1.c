#include <stdio.h>

int main(void){
  int a[9] = {1, 2, 3, 3, 2, 1, 1, 2, 3};
  int b[9] = {0};
  int i, j,tmp;
  for(i = 0; i < 9; i++)
  {
    tmp = i;
    for(j = i + 1; j < 9; j++){
      if(a[j] == a[tmp]){
            b[j] = a[i];
            b[tmp] = a[i];
      }
     }
   }
  for(i = 0 ; i < 9; i++){
    printf("%d =",i);
    for(j = 0; j < 9; j++){
    if(b[j] == i){
    printf("b[%d]",j);
    }
   }
   printf("\n");
  }
  printf("\n");
  return 0;
}
