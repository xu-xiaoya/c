#include<stdio.h>
int power(int x, int y) {
  int s = 1;
  for (int i = 1; i <= y; i++) {
    s *= x;
  }
  return s;
}
int main() {
  int a, b;
  while (scanf("%d%d", &a, &b), a||b) {
    printf("%d\n",power(a, b));
  }
}
