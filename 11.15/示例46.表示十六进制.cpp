//方法一(循环数组)： 
#include<stdio.h>
int main() {
  while (1) {
  int n, a[100], k = 0;
  //与10进制的对应关系是:0-9对应0-9;A-F对应10-15
  char s[] = "0123456789ABCDEF";
  scanf("%d", &n);
  while (n) {
    //++为运行完本条指令后k += 1。 
    a[k++] = n % 16;
    n /= 16; 
  }
  for (int i = k - 1; i >= 0; i--)
    printf("%c", s[a[i]]);
  printf("\n");
  }
}
//方法二（递归）：
#include<stdio.h>
char c[] = "0123456789ABCDEF";
void show(int n) {
  if (n > 0) {
    show(n / 16);
    printf("%c", c[n % 16]);
  } 
}
int main() {
  int n;
  while (~scanf("%d", &n)) {
    show(n);
    printf("\n");
  }
} 
