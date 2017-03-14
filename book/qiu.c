#include <stdio.h>

#define PAI 3.1415926
#define GS (4.0 / 3.0)
float main (){
  float r;
  float tj;
  printf("请输入半径： \n");
  scanf ("%f",&r);
   tj = GS * PAI * r * r * r;
   printf("tj = %f\n",tj);
  return 0;
}
