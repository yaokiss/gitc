#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str1[32] = "hello";
  char str2[32] = "world";
  int ret;
  ret = strcmp(str1,str2);
  if(ret > 0){
    printf("str1 > str2 %d\n", ret);
  }
  else if(ret < 0){
    printf("str1 < str2 %d\n",ret);
  }
  else if(ret = 0){
    printf("str1 = str2 %d\n",ret);
  }
  return 0;
}
