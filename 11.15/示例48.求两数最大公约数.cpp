#include<stdio.h>
//����һ�� 
int gcd(int m, int n) {
  int t = m > n ? n : m;
  //while(1)������ȫ��ѭ�� 
  while (1) {
    if (m % t == 0 && n % t == 0)
      return t;
    t--;
  }
} 
//�� 
int gcd(int m, int n) {
  //min(m, n)��ʾm��n�е���Сֵ�� 
  for (int i = min(m, n); i >= 1; i--)
    if (m % i == 0 && n % i == 0)
      return i;
} 
//��������
int gcd(int m, int n) {
  int s = 1;
  for (int i = 2; i <= m && i <= n; i++) {
    while (m % i == 0 && n % i == 0) {
      s *= i;
      m /= i;
      n /= i;
    }
  }
  return s;
}
//�������� 
int gcd(int m, int n) {
//�����������ʱ����ѭ����Ϊ���Լ�� 
  while (m != n) {
    if (m > n)
      m = m - n;
    else
      n = n - m; 
  }
  return m;
}
//�����ģ�
int gcd(int m, int n) {
  while (m != 0 && n != 0) {
    if (m > n)
      m = m % n;
    else
      n = n % m;
  }
  return m == 0 ? n : m;
} 
//�����壺
int gcd(int m, int n) {
  int k;
  while (n != 0) {
    k = m % n;
    m = n;
    n = k;
  }
  return m;
} 
//��������
int gcd(int m, int n) {
  int k;
  while (k = m % n) {
    m = n;
    n = k;
  }
  return n;
}
//�����ߣ�
int gcd(int m, int n) {
  if (n == 0) return m;
  return gcd(n, m % n);
}
int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  printf("%d", gcd(m, n));
}
