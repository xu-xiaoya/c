#include<stdio.h>
int main() {
  char a, b;
  scanf("%c%c", &a, &b);
  printf("%c %c", a, b);
}

#include<stdio.h>
int main() {
  int ch;
//char c;
//c = getchar();
//getchar()用法如上，只接受一个字符，输入数字也按字符处理。
//输入多于一个字符时，只接收第一个字符。
  while ((ch = getchar()) != '\n') 
//putchar 函数是字符输出函数.
  putchar(ch);
}
