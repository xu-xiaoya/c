#include<stdio.h>
int main() {
  int s = 0; 
  for (int i = 1; i <= 10; i++) {
    int t = 1;
    for (int j = 1; j <= i; j++)
      t *= j; 
  }
  
  printf ("%d\n", s);
}
