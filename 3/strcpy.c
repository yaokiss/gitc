#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]){
  char dest[128];
  char src[128] = "This is a test";
  strcpy(dest, src);
  printf("dest = %s\n",dest);
  return 0;
}
