nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char * argv[]){
  char cmd [100] = "\0";
  char sum [100] = "\0";
  char th [100] = "\0";
  char name [100] = "\0";
  if(3 == argc){
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);

    //文件改名
    /*strcat(name, "mv ");
    strcat(name, " ");
    strcat(name, argv[1]);
    strcat(name, " ");
    strcat(name, argv[2]);
    printf("%s\n",name);*/

    //创建文件；
    strcat(th, "touch ");
    strcat(th, " ");
    strcat(th, argv[2]);
    printf("\n正在创建文件：%s\n",th);
    sleep(2);
    system(th);

    //拷贝文件
    strcat(cmd, "cp ");
    strcat(cmd, argv[1]);
    strcat(cmd, " ");
    strcat(cmd, argv[2]);
    printf("\n输入拷贝命令:%s\n", cmd);

    //删除文件
    strcat(sum, "rm ");
    strcat(sum, argv[1]);
    strcat(sum, " ");
    strcat(sum, argv[2]);
    strcat(sum, " ");
    strcat(sum, "-rf");
    printf("正在拷贝,请稍等......!\n");

    sleep(2);
    printf("\n输入删除命令:%s\n", sum);
    system(cmd);
    printf("请稍等,正在准备删除......!\n\t\t\t");
    sleep(3);
    system(sum);
    printf("已删除\n");
  }
  else{
    printf("你丫的输错了不知道吗？\n");

    sleep(2);
    printf("\n请输入正确信息\n");

    sleep(2);
    printf("\n10秒后见输入信息\n");

    sleep(10);
    printf("\n麻利的打 111 222\n");
  }
    printf("\n");
  return 0;
}
