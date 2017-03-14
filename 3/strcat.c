#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char dest[64] = "hello ";
    char src[32] = " world !";
    strcat(dest, src);
    printf("%s\n",dest);
  return 0;
}
