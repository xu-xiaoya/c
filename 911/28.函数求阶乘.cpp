#include<stdio.h>
int square(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return (n * square(n - 1));
  }
}
int main() {
  int ui;
  scanf("%u", &ui);
  printf("%dµÄ½×³ËÎª:%d\n", ui, square(ui));
  return 0;
}
