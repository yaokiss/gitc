#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str[64] = "hello";
  int len = strlen(str);
  printf("string = %d\n",len);
  printf("strlen(str) = %lu\n",sizeof(str));
  printf("%d\n",len);
  return 0;
}
