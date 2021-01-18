#include<stdio.h>
int main() {
  int n, a, b, c;
  for(a = 1; a < 10; a++) {
    for(b = 0; b < 10; b++) {
      for(c = 0; c < 10; c++) {
        n = a * 100 + b * 10 + c;
        if (n == (a*a*a + b*b*b + c*c*c)) {
          printf("%d\n", n);
        }
      }
    }
  }
}
