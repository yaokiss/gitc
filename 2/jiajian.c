#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 8;
  int b = 2;
  int sum;
  if(argv[1][0] == '+'){
    sum = a + b;
  }
  else if(argv[1][0] == '-'){
    sum = a - b;
  }
  else if(argv[1][0] == '*'){
    sum = a * b;
  }
  else if(argv[1][0] == '/'){
    sum = a / b;
  }

  printf("%d\n",sum);



  return 0;
}
