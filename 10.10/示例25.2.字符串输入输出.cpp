#include<stdio.h>
int main() {
  //字符串中[]为字节长度 
  char a[100], b[100];
  //字符串输入中不用&符号 
  scanf("%s%s", a, b); 
  printf("%s %s", a, b);
} 

//法二：
#include<stdio.h>
int main() {
  char a[100];
  gets(a);
  puts(a);
}
/*当用户键入回车之后，getchar才开始从stdio流中每次读入一个字符
  getchar函数的返回值是用户输入的字符的ASCII码
   ↓ 
  getchar();
*/ 
