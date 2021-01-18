#include<stdio.h>
int main() {
  int a[10], max = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  for(int i = 9; i >= 0; i--) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  printf("%d", max);
}
