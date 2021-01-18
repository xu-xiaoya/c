#include<stdio.h>
int main() {
  int n, a, b, c;
  scanf("%d", &n);
  a = n / 100 % 10;
  b = n / 10 % 10; 
  c = n % 10;
  if (n == a*a*a + b*b*b + c*c*c) {
    printf("Yes!\n");
  } else {
    printf("No!\n");
  }
}


//第二种方法：
#include<stdio.h>
int main() {
  int n, a, b, c;
  // while (scanf("%d", &n), n)循环输入一个值。
  //“，n”的n值为最后一次输入的n值， 非0则循环，0则跳出。
  while (scanf("%d", &n), n) {
    // 对n进行处理
    a = n / 100 % 10;
    b = n / 10 % 10; 
    c = n % 10;
    if (n == a*a*a + b*b*b + c*c*c) {
      printf("Yes!\n");
    } else {
      printf("No!\n");
    }
  }
} 

//以0结束的循环3
#include<stdio.h>
int main() {
  int a, b;
  while (scanf("%d%d", &a, &b), a || b) {
    // 对a、b进行处理
  }
} 

