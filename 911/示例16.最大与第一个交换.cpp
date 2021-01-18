#include<stdio.h>
int main() {
  //第一种方法： 
  int a[10], max, k;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  k = 0;
  max = a[0];
  for (int i = 0; i < 10; i++) {
    if (a[i] > max) {
      max = a[i];
      k = i;
    }
  }
  a[k] = a[0];
  a[0] = max;
  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  
  //第二种方法：
  int a[10], k; 
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  k = 0;
  for (int i = 1; i < 10; i++ ) {
    if (a[i] > a[k]) {
      k = i;
    }
  }
  int t = a[k];
  a[k] = a[0];
  a[0] = t;
  for (int i = 0; i < 10; i++) {
    printf("%d", a[i]);
  }
}
