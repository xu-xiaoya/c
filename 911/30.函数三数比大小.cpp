#include<stdio.h>
int min(int x, int y, int z) {
  if (x < y && x < z) {
    return x;
  } else if (y < x && y < z) {
    return y;
  } else if (z < x && z < y) {
    return z;
  }
}
int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  c = min(a, b, c);
  printf("%d", c); 
}
