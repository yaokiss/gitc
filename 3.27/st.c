#include <stdio.h>
#include <string.h>

struct Books{
  char title[48];
  int book_id;
};

int main(){
  struct Books book = {"xxx", 1234};
  struct Books book1;
  book1.book_id = 1235;
  strcpy(book1.title,"yyy");
  printf("%ld\n",sizeof(book));
  return 0;
}
