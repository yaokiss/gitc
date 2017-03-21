#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cgic.h"
#include <sqlite3.h>

#define M 32
#define N 128

void Name();
void ShowForm();
void Address();
void HandleSubmit();

int cgiMain() {
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<HTML lang=\"en\"><HEAD>\n");
  fprintf(cgiOut, "<meta charset=\"UTF-8\">\n");
  fprintf(cgiOut, "<TITLE>cgic test</TITLE></HEAD>\n");
  fprintf(cgiOut, "<BODY><h1>个 人 信 息 登 记 薄</h1>\n");
  if ((cgiFormSubmitClicked("testcgic") == cgiFormSuccess) || (cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess)){
    HandleSubmit();
    fprintf(cgiOut, "<hr>\n");
  }

  ShowForm();
  fprintf(cgiOut, "</BODY></HTML>\n");
  return 0;
}

void HandleSubmit(){
  Name();
  Address();
}


void Name(){

  char name[81];
  char id[81];
  char score[81];
  char delete[81];
  sqlite3 *db;
	char *errmsg;
  char sql[N] = {0};
  int idt,scoret,det;
  cgiFormStringNoNewlines("id",id,81);
  fprintf(cgiOut,"ID:");
  cgiHtmlEscape(id);
  fprintf(cgiOut,"<BR>\n");
  cgiFormStringNoNewlines("name",name,81);
  fprintf(cgiOut,"Name: ");
  cgiHtmlEscape(name);
  fprintf(cgiOut,"<br>\n");
  cgiFormStringNoNewlines("score",score,81);
  fprintf(cgiOut,"Score:");
  cgiHtmlEscape(score);
  fprintf(cgiOut,"<BR>\n");
  cgiFormStringNoNewlines("delete",delete,81);
  idt = atoi(id);
  scoret = atoi(score);
  det = atoi(delete);
  if (sqlite3_open("./db/my.db", &db) != SQLITE_OK)
	{
		printf("%s\n", sqlite3_errmsg(db));
	}

	int ret;
	//sql语句在编写时,如果需要分行写,那么需要添加连接符'\',而且连接符的后边不要带有空格
	if ((ret = sqlite3_exec(db, "create table stu(id integer, name vchar(32) not null,\
		score integer not null)", NULL, NULL, &errmsg)) != SQLITE_OK)
	{
		if (ret != 1)
		{
			printf("%s\n", errmsg);
			sqlite3_close(db);

		}
	}
  if(idt != 0){
  sprintf(sql, "insert into stu values(%d, '%s', %d)", idt, name, scoret);
  if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK)
  {
    printf("%s\n", errmsg);

  }
}

  sprintf(sql, "delete from stu where id = %d", det);

	if (sqlite3_exec(db, sql, NULL, NULL, &errmsg) != SQLITE_OK)
	{
		printf("%s\n", errmsg);
	}
sqlite3_close(db);


}
void Address() {
  char address[244];
  cgiFormString("address",address, 241);
  fprintf(cgiOut,"Address: <PRE>\n");
  cgiHtmlEscape(address);
  fprintf(cgiOut, "</PRE>\n");
}

void ShowForm()
{
  fprintf(cgiOut, "<!-- 2.0: multipart/form-data is required for file uploads. -->");
  fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
  fprintf(cgiOut, " action=\" ");
  cgiValueEscape(cgiScriptName);
  fprintf(cgiOut,"\">\n");
  fprintf(cgiOut,"<p>\n");
  fprintf(cgiOut,"ID:<input type=\"text\" name=\"id\" size=2>\n");
  fprintf(cgiOut,"Name:<input type=\"text\" name=\"name\" size=2>\n");
  fprintf(cgiOut,"Score:<input type=\"text\" name=\"score\" size=2>\n");
  fprintf(cgiOut,"<p>\n");
  fprintf(cgiOut,"Delete:<input type=\"text\" name=\"delete\" size=2>\n");
  fprintf(cgiOut,"<p>\n");
  fprintf(cgiOut,"<h4>详细内容:</h4>\n");
  fprintf(cgiOut, "<textarea NAME=\"address\" ROWS=4 COLS=40>\n");
  fprintf(cgiOut, "</textarea>\n");
  fprintf(cgiOut,"<p>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"提交\">\n");
  fprintf(cgiOut,"</form>\n");
}


//gcc mytest.c -lsqlite3 -L./ -lcgic -o mytest
//sudo cp mytest /usr/lib/cgi-bin/
