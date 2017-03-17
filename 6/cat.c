#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  char cat[100];
  strcat(cat,"cat ");
  strcat(cat, argv[1]);
  printf("前方高能......!\n");
  sleep(1.5);
  printf("5\n");
  sleep(1.5);
  printf("4\n");
  sleep(1.5);
  printf("3\n");
  sleep(1.5);
  printf("2\n");
  sleep(1.5);
  printf("1\n");
  sleep(1);
  system(cat);

  return 0;
}
