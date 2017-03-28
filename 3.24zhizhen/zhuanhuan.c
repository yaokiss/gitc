#include <stdio.h>


void bai(){
  int a = getchar();
  while(a != EOF){
    if(a == 32){
      printf("%%20 ");
    }
    else{
      printf("%c",a);
    }
    a = getchar();
  }
}

void kong(){
  int i = 0;
int b = getchar();
  while(b != EOF){
  if (i == 0){
    if (b == '%'){
      i++;
    }
    else{
      printf("%c",b);
      i = 0;
    }
  }
  else if(i ==1){
    if(b == '2'){
      i++;
    }
    else{
      printf("%%");
      printf("%c",b);
      i = 0;
    }
  }
  else if(i == 2){
    if(b == '0'){
      printf(" ");
      i = 0;
    }
    else{
      printf("%%");
      printf("2");
      printf("0");
      printf("%c",b);
      i = 0;
    }
  }
  b = getchar();
}
}

int main(){
  bai();
  kong();
  return 0;
}
