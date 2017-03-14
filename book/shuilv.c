#include <stdio.h>

#define SL (5.0 / 100.0)

float main (void){
  float G;
  float S;
  printf("请输入金额： \n");
  scanf("%f",&G);
  S = G + G * SL;
  printf("%.2f\n", S);

  return 0;
}
