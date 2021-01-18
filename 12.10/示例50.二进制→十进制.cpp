#include<stdio.h>
#include<string.h>
int main() {
  char s[50];
  gets(s);
  int sum = 0, k = 1;
  for (int i = strlen(s) - 1; i >= 0; i--) {
//-'0'表示化为整形 
    sum += k * (s[i] - '0');
//第一轮：x1 * 2^0， 第二轮：x2 * 2^1 第三轮：x3 * 2^3
//相加即为十进制数字 
    k *= 2;
  }
  printf("%d", sum);
}
