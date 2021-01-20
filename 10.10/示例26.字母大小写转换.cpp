#include<stdio.h>
//<string.h>处理字符串 
#include<string.h>
int main() {
  char s[100];
  gets(s);
  int i = 0;
//'\0'为正常录入字符串后最后一个字符。 
  while (s[i] != '\0') {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] += 32;
    i++;
  }
  puts(s);
}


//第二种方法：
#include<stdio.h>
#include<string.h>
int main() {
  char s[100];
  gets(s);
//strlen()函数与第一种方法遇'\0'跳出作用相同。
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
    //ascii码中大写字母与小写字母相差一个空格（32） 
    /*大写字母+32 →小写
      小写字母-32 →大写*/ 
      s[i] += ' ';
  }
  puts(s);
} 
