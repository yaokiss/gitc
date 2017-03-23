#include <stdio.h>

int main (void){
   int a[5] = {1, 2, 3, 4, 5,};
   int *i = &a[0];
   int *j = &a[2];
   int p = 0;
   char str[64] = "helloworld";
   char *s = str;

  printf("j - i = %d\n", j - i);

  for (p = 0 ; p < 5; p++){
    printf("%d\n",*(i++));
  }

  while(*s != '\0'){
    printf("%c\n",*s);
    s++;
  }

  return 0;
}
