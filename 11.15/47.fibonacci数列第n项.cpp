#include<stdio.h>
//����һ�� 
int fib(int n) {
  int f1, f2, f;
  if (n == 1 || n == 2) return 1;
  f1 = f2 = 1;
  for (int i = 3; i <= n; i++) {
    f = f1 + f2;
    f1 = f2;
    f2 = f;
  }
  return f;
}
//������(ѭ��)��
int f[100];
int fib(int n) {
  f[1] = f[2] = 1;
  for (int i = 3; i <= n; i++)
    f[i] = f[i-1] + f[i-2];
  return f[n];
}
//�����������ݹ飩
int fib (int n) {
  if (n == 1 || n == 2) return 1;
  //�ݹ����n=1��n=2ʱ�����պ� 
  return fib(n-1) + fib (n-2);
}
 
int main() {
  int n;
  scanf("%d", &n);
  printf("%d", fib(n));
}
