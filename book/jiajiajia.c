#include <stdio.h>

int main(void){
  int i, j, a, b, c;
  int tmp, sum;
  for(i = 0; i <= 100; i++){

    printf("i = %d\n",i);

    for(j = 0; j <= 100;j++){

      printf("j = %d\n",j);

      for(a = 0; a <= 100; a++){

        printf("a = %d\n", a);

        for(b = 0; b <= 100; b++){

          printf("b = %d\n", b);

          for(c = 0; c <= 100; c++){

            printf("c = %d\n", c);

              /*tmp = i * j * a * b * c;
              sum = i + j + a + b + c;
              printf("tmp = %d\n", tmp);
              printf("sum = %d\n", sum);*/
          }
        }
      }
    }
  }           tmp = i * j * a * b * c;
              sum = i + j + a + b + c;
              printf("tmp = %d\n", tmp);
              printf("sum = %d\n", sum);
  printf("\n");
  return 0;
}
