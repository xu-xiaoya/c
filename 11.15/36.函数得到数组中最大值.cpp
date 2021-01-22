#include<stdio.h>
const int N = 10;
int SearchMax(int a[], int n){
  int k = 0;
  for (int i = 1; i < n; i++)
    if (a[i] > a[k]) k = i;
    int t = a[k];
    return t;
}
int main() {
  int a[N];
  for (int i = 0; i < N; i++) scanf("%d", &a[i]);
  printf("×î´óÖµ£º%d\n", SearchMax(a, N));
}
