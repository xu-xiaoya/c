#include<stdio.h>
int main() {
  double t = 1, s = 0;
  for (int i = 0; i <= 63; i++) {
    s += t;
    t = 2 * t;
  }
  printf("%lf", s/2.5e7);
  //2.5e7:2.5*10^7  科学计数法 
}
