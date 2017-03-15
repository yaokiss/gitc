#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char cat[100];
  strcat(cat,"cat ");
  strcat(cat, argv[1]);
  system(cat);

  return 0;
}
