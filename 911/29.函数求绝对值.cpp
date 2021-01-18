#include<stdio.h>
int square(int n) {
  if (n >= 0) {
    return n;
  } else {
    return n *= -1;
  }
}
int main() {
  int N;
  scanf("%d", &N);
  printf("%d", square(N));
}
