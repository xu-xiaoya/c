#include<stdio.h>
const int N = 10;
int BinarySearch(int a[], int n, int x){
  int low = 0, high = n-1, middle;
  while (low <= high) {
    middle = (low + high) / 2;
    if (a[middle] == x) return middle;
    else if (a[middle] > x) high = middle - 1;
    else low = middle + 1; 
  }
  return -1;
}
int main() {
  int a[N], d;
  for (int i = 0; i < N; i++) scanf("%d", &a[i]);
  printf("��������Ҫ�ҵ�����");
  scanf("%d", &d);
  int k = BinarySearch(a, N, d);
  if (k == -1)
    printf("û����Ҫ�ҵ���\n");
  else
    printf("��Ҫ�ҵ���������\n"); 
}
