#include<stdio.h>
int main() { 
  int count[26] = {0};
  char s[100];
  gets(s);
  for (int i = 0; s[i] != '\0'; i++)
//把每个字母通过减去a的ascii值来转换成下标，比如a-'a'=0,b-'a'=1 
//++是数组某项的值加一。例如：字符串出现一个a时，count[0]+1.
  ++count[s[i] - 'a'];
  int k = 0;
  for (int i = 1; i < 26; i++)
//判断哪个下标值最大，并将下标用变量 k 指出。
    if (count[i] > count[k]) k = i;
//k + 'a表示最大项下标加上'a'的ascii码，逆转为字母显示。
  printf("%c\n", k + 'a');
}
