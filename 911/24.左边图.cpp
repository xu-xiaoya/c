#include<stdio.h>
int main() {
  int n, j, k;
  scanf("%d", &n);
  for (int i = 1; i <= (n + 1)/2; i++) {
    for (int j = 1; j <= (n + 1)/2 - i; j++) 
      printf(" ");
    for (int j = 1; j <= 2 * i - 1; j++) 
      printf("*");
      printf("\n");
  }
  for (int i = (n-1)/2; i >= 1; i--) {
    for (k = 1; k <= (n-1)/2-i+1; k++) 
      printf(" ");
    for (j = 2*i-1; j >= 1; j--) 
      printf("*");
      printf("\n");
  }
}

