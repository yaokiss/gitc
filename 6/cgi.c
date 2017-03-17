#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[100];
  long i, j;
  float c, b;
  int k;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL)
    printf("error!!!\n");
  //printf("%s\n", data);
  sscanf(data, "a=%ld&oper=%d&b=%ld", &i,&k, &j);
  if(k == 0 )
  {
    printf("%ld + %ld = %ld\n", i, j, i + j);
  }

  if(k == 1)
  {
    printf("%ld - %ld = %ld\n", i, j, i - j);
  }

  if(k == 2)
  {
    printf("%ld * %ld = %ld\n", i, j, i * j);
  }

   if(k == 3)
  {
    c = i;
    b = j;
    printf("%ld / %ld = %f\n", i, j, c / b);
  }

  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}


//gcc cgi.c
//sudo cp a.out /usr/lib/cgi-bin/cgi   
