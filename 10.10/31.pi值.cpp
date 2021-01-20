#include<stdio.h>
#include<math.h>
int main() {
  int i = 1, j = 3;
  double s = 1.0, s1 = 1.0;
  while ( s1 > 1e-8) {
      s1 =  s1 * i/j; 
      s += s1; 
      i++;
      j += 2;  
  }
  printf("%lf\n", 2 * s);
}
