#include<stdio.h>
void showl(int n) {
  while (n) {
    printf("%d", n % 10);
    n / 10;
  }
}
