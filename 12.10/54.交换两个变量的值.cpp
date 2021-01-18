#include<stdio.h>
void swap(int *x, int *y) {
  int t;
  //t为临时变量，暂存x，y中的某个值 
  t = *x; *x = *y; *y = t;
}
int main() {
  int a= 10, b = 20;
  swap(&a, &b);
  printf("%d %d", a, b);
}
