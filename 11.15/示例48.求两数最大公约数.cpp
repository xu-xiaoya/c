#include<stdio.h>
//方法一： 
int gcd(int m, int n) {
  int t = m > n ? n : m;
  //while(1)括起来全部循环 
  while (1) {
    if (m % t == 0 && n % t == 0)
      return t;
    t--;
  }
} 
//或 
int gcd(int m, int n) {
  //min(m, n)表示m，n中的最小值。 
  for (int i = min(m, n); i >= 1; i--)
    if (m % i == 0 && n % i == 0)
      return i;
} 
//方法二：
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
//方法三： 
int gcd(int m, int n) {
//等两个数相等时跳出循环即为最大公约数 
  while (m != n) {
    if (m > n)
      m = m - n;
    else
      n = n - m; 
  }
  return m;
}
//方法四：
int gcd(int m, int n) {
  while (m != 0 && n != 0) {
    if (m > n)
      m = m % n;
    else
      n = n % m;
  }
  return m == 0 ? n : m;
} 
//方法五：
int gcd(int m, int n) {
  int k;
  while (n != 0) {
    k = m % n;
    m = n;
    n = k;
  }
  return m;
} 
//方法六：
int gcd(int m, int n) {
  int k;
  while (k = m % n) {
    m = n;
    n = k;
  }
  return n;
}
//方法七：
int gcd(int m, int n) {
  if (n == 0) return m;
  return gcd(n, m % n);
}
int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  printf("%d", gcd(m, n));
}
