#include<stdio.h>
int main() {
  int a[10], k, m, n, j , x, i;
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  k = 0;
  m = 1;
  n = 2;
  //������ŵ�һ���� 
  for (i = 0; i < 10; i++) {
    if (a[i] > a[k]) {
      k = i;
    }
  }
  int t = a[k];
  a[k] = a[0];
  a[0] = t;
  //�ڶ������ŵڶ����� 
  for (i = 1; i < 10; i++) {
    if (a[i] > a[m]) {
      j = i; 
    }
  }
  int p = a[j];
  a[j] = a[1];
  a[1] = p;
  //���������ŵ������� 
  for (i = 2; i < 10; i++) {
    if (a[i] > a[n]) {
      x = i; 
    }
  }
  int q = a[x];
  a[x] = a[2];
  a[2] = q;
  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
}
