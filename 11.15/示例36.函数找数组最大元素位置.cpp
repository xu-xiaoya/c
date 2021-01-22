#include<stdio.h>
const int N = 10;
//函数第一个参数要求的是数组，a[] 
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
//这里a没加[]因为前面已声明是一个数组，可加可不加。 
  printf("最大值：%d\n", SearchMax(a, N));
}
