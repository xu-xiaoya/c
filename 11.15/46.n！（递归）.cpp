#include<stdio.h>
int show(int n) {
  int sum = 0;
  if (n == 0) 
    return 1;
  else
    sum = n * show(n - 1);
  return sum;
} 
int main() {
  int n;
  scanf("%d", &n);
  printf("%d", show(n));
}
