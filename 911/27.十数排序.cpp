#include<stdio.h>
int main(){
  int a[10], k;
  for (int i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < 10; i++) {
    k = i;
    for (int j = i+1; j < 10; j++)
      if (a[j] < a[k]) k = j;
    int t = a[k];
    a[k] = a[i];
    a[i] = t;
  }
  for (int i = 0; i < 10; i++)
    printf("%d ", a[i]);
}
