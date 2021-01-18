#include<stdio.h>
int main() {
  int i = 1, N, c = 1;
  scanf("%d", &N);
  int n = N;
  while (i <= n) {
    c *= n;
    n -= 1;
  }
  printf("%dµÄ½×³ËÊÇ£º%d", N, c);
}
