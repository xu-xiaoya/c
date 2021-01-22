#include<stdio.h>
//除二取余数，当除数为0时停止，反序输出数组的值（即余数）  
void binary(int n) {
/*
n=6,n>1,      printf("0");
n=3,n>1,  printf("1");↑ 
      printf("1");↑
      n<1结束，再返回之前调用的函数 
      */ 
  if (n > 1)
    binary(n / 2);
    printf("%d", n % 2);
}
int main() {
  int n;
  scanf("%d", &n);
  binary(n);
  printf("\n");
}
