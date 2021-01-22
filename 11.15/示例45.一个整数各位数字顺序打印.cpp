#include<stdio.h>
//方法一： 
  //函数一(递归)： 
void show(int n) {
/*举1234为例子
n=1234,n>10,show(123)             printf("4");↑
n=123, n>10,show(12)          printf("3");↑
n=12,  n>10,show(1)       printf("2");↑
n=1,   n<10,          printf("1");↑
                  结束返回到上一次调用的地方
*/
  if (n < 10) {
    printf("%d", n);
  } else {
    show(n / 10);
    printf(" %d", n % 10);
  }
}

  //函数二（循环+数组）：
void show (int n) {
  int a[10], i = 0;
  while (n) {
//i后++在执行本条指令后才+1。 
    a[i++] = n % 10;
    n / 10; 
  }
  for (int j = i - 1; j >= 0; j--) 
    printf("%d", a[j]); 
} 

int main() {
  int n;
  while (~scanf("%d", &n)) {
    show(n);
    printf("\n");
  }
}
/*
//方法二：
#include<stdio.h>
void show(int n) {
  int k = 1, m = n;
  while (m > 10) {
    k *= 10;
    m /= 10; 
  }
  while (n) {
    printf("%d", n / k);
    n %= k;
    k /= 10;
  }
}
int main() {
  int n;
  while (~scanf("%d", &n)) {
    show(n);
    printf("\n");
  }  
}
*/
