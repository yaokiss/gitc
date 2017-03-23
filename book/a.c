#include <stdio.h>

int main(void){
  int q=0,w=1,e=2,r=3,t=4,y=5;

  int sum,sum1;
  q += w += e += r += t += y += 2;
  sum = q * w * e * r * t * y;
  sum1 = q + w + e + r + t + y;
  printf("q = %d\n w = %d\n e = %d\n r = %d\n t = %d\n y = %d\n", q, w, e, r, t, y);
  printf("sum = %d sum1 = %d\n",sum ,sum1);
  return 0;
}
