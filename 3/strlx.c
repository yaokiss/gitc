#include <stdio.h>

int my(const char *str){
  int i;
  int j = 0;
  for(i = 0; str[i] != '\0';i++){
    j = j + 1;
  }

return j;
}

void my1(char *dest,const char *str){
        int i;
        for (i = 0;str[i] != '\0';i++)
        {
        dest[i] = str[i];
        }

}
void my2(char *tmp, char *str,const char *b){
        int i, j;
        for(i = 0; str[i] != '\0'; i++){

        tmp[i] = str[i];
      }

        for (j = 0; b[j] != '\0'; i++, j++){
            tmp[i] = b[j];

      }
          tmp[i] = '\0';
}


int main(int argc, char const *argv[]) {
       char str[64] = "hello world!";
       char dest[64];
       char t[100];
       char q[64] = " aaaaa";
       int len = my(str);
       my1(dest,str);
       char *b;
        my2(t, str, q);

    printf("%d\n",len);
    printf("%s\n",dest);
    printf("%s\n",t);
  return 0;
}
