#include<stdio.h>
const int N = 10;
int Search(int a[], int n, int x){
  for (int i = 0; i < n; i++)
    if (a[i] == x) return i;
    return -1;
}
int main() {
  int a[N], d;
  for (int i = 0; i < N; i++) scanf("%d", &a[i]);
  printf("��������Ҫ�ҵ�����");
  scanf("%d", &d);
  int k = Search(a, N, d);
  if (k == -1)
    printf("û����Ҫ�ҵ���\n");
  else
    printf("��Ҫ�ҵ����ڵ�%dλ", k + 1); 
}
