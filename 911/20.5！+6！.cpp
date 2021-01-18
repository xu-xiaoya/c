#include<stdio.h>
int main() {
  int i, j, sum_1 = 1, sum_2 = 1, sum = 0;
  for (i = 5; i > 0; i--) {
    sum_1 *= i; 
  }
  printf("%d\n", sum_1);
  for (j = 6; j > 0; j--) {
    sum_2 *= j;
  }
  printf("%d\n", sum_2);
  sum += sum_1;
  sum += sum_2;
  printf("%d", sum);
}
