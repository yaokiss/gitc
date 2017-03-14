#include <stdio.h>
#include <string.h>
int main(void)
{
  printf("Content type: text/html\n\n");
  printf("<html lang =\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("{color:black; text-align: left;}");
  printf("</style></head>");
  printf("<body background=\"http://i1.piimg.com/1949/65ca03af66d01142.jpg\">\n");
  printf("<h1>全栈H5课程市场咨询培训</h1>\n");
  printf("<h2>1.HTML5导论</h2>\n");
  printf("<h3>什么是HTML5[1]</h3>\n");
  printf("<p>答:广义论及HTML5时,实际指的是包括HTML、CSS和javaScript在内的一套组合。HTML超文本标记语言（英语:<br />HyperText Markup Language,简称:HTML)是一种用于创建网页的标准标记语言。</p><p>CSS是层叠样式表(英语:Cascading Style Sheets,简称CSS),又称串样式列表、级联样式表、串接样式表、层叠样式表、<br />階層式样式表,一种用来为结构化文档(如HTML文档或XML应用)添加样式(字体、间距和颜色等)的计算机语言,由W3C<br />定义和维护。</p><p>JavaScript一种解释型脚本语言,是一种动态类型、基于原型的语言,内置支持类。他的解释器被称为JavaScript引擎，<br />为浏览器的一部分，广泛用于客户端的脚本语言，最早是在HTML网页上使用,用来给HTML网页增加动态功能。然而<br />现在JavaScript也可被用于网络服务器，如Node.js。</p>");
  printf("<h3><p>发展史[3]</p></h3>\n");
  printf("<p><li> HTML 1.0 ——— 在1993年6月作为互联网工程工作小组(IETF)工作草案发布(并非标准)</p><li> HTML 2.0 ——— 1995年11月作为RFC 1866发布，在RFC 2854于2000年6月发布之后被宣布已经过时</p><p><li> HTML 3.2 ——— 1997年1月14日,W3C推荐标准</p><p><li> HTML 4.0 ——— 1997年12月18日,W3C推荐标准</p><p><li> HTML 4.01 (微小改进) ——— 1999年12月24日,W3C推荐标准</p><p><li> HTML 5 ——— 2014年10月28日,3WC推荐标准</p>");
  printf("<p>万维网联盟(World Wide Web Consortium,W3C),又称W3C理事会。1994年10月在麻省理工学院计算机科学实验室成立。<br />创建者是互联网的发明者蒂姆·伯纳斯-李。</p>\n");
  printf("<h3><p>原来HTML4和现在的HTML5的差异</h3></p> <p>从HTML的语法本身也有很大的变化,HTML5增加了更多的新的元素在里面.</P>");
  printf("<p>HTML语言:</p>");
  printf("<table border='1'cellspacing=\"0\" cellpadding=\"10\">\n");
  printf("<tr> <th class='onecenter'>HTML4</th>");
  printf("<th class='onecenter'>HTML5</th>");
  printf("<tr><td class='onecenter'>单一标记语言</td>");
  printf("<td class='onecenter'>增加了信元素,例如有画图元素，多媒体元素等.</tb>");
  printf("<tr><td class='onecenter'bgcolor=\"#F0F8FF\">程序旧口DOM</td>");
  printf("<td class='onecenter'bgcolor=\"#F0F8FF\">增加了列多死亡API接口,如:离线数据库储存.文档编辑,拖拽可控制等.</td></table>");
  printf("<p>编程语言:</p>");
  printf("<table border='1'cellspacing=\"0\" cellpadding=\"10\">\n");
  printf("<tr> <th class='onecenter'>HTML4</th>");
  printf("<th class='onecenter'>HTML5</th>");
  printf("<tr><td class='onecenter'>前端:HTML,CSS,JavaScript</td>");
  printf("<td class='onecenter'>JavaScript</td>");
  printf("<tr><td class='onecenter'bgcolor=\"#F0F8FF\">后端:PHP,C,Per等</td>");
  printf("<td class='onecenter'bgcolor=\"#F0F8FF\">JavaScript</td></table>");
  printf("<p>数据库:</p>");
  printf("<table border='1'cellspacing=\"0\" cellpadding=\"10\">\n");
  printf("<tr><th class='onecenter'>HTML4</th>");
  printf("<th class='onecenter'>HTML5</th>");
  printf("<tr><td class='onecenter'>关系型数据库,mysql等</td>");
  printf("<td class='onecenter'>JavaScript</td></table>");
  printf("<p>服务器的架:</p>");
  printf("<table border='1'cellspacing=\"0\" cellpadding=\"10\">\n");
  printf("<tr><th class='onecenter'>HTML4</th>");
  printf("<th class='onecenter'>HTML5</th>");
  printf("<tr><td class='onecenter'>Linux + mysql + php +apache</td>");
  printf("<td class='onecenter'>Dockr + NodJS or Meteor</td></table>");
  printf("<p><img src=\"http://p1.bpimg.com/1949/445be84bb2061c23.jpg\" width=\"200\" height=\"200\" /></p>");
  printf("</body>\n");
  fflush(stdout);
  return 0;
}
