#include<stdio.h>
#include<string.h>
int main () {
  char s[50];
  gets(s);
  int t, len;
  len = strlen(s); 
  long long sum = 0;
/*2AF5
2*16^3+10*16^2+15*16+5=10997
*/
  for (int i = 0; i < len; i++) {
    if (s[i] <= '9') 
      t = s[i] - '0';
    else 
      //将A-F化为10~15 
      t = s[i] - 'A' + 10;
/*
第一轮：sum = 2
第二轮：sum = 2 * 16 + 15
第三轮：sum = (2*16 + 10) * 16 + 15
第四轮：sum = ((2*16^2 + 10*16) + 15) * 16 + 5
sum = 2*16^3+ 10*16^2 + 15*16 +5 
*/
    sum = sum * 16 + t;
  }
  printf("%lld", sum);
  return 0;
}
