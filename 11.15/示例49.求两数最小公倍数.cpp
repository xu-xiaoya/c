#include<stdio.h>
//方法一： 
int lcm(int m, int n) {
  int t = m > n ? m : n;
  while (1) {
    if (t % m == 0 && t % n == 0)
      return t;
    t++;
  } 
}
//方法二：
int lcm(int m, int n) {
  if (m < n) swap(m, n);
  int s = m;
  while (s % n != 0) s += m;
  return s;
} 
//方法三：
int gcd(int m, n) {
  for (int i = 2; i <= m && i <= n; i++) {
    while (m % i == 0 || n % i == 0) {
      s *= i;
      if (m % i == 0) m /= i;
      if (n % i == 0) n /= i;
    }
  }
  return s;
}
//方法四：
int lcm(int m, int n) {
  int k, t = m * n;
  while (k = m % n) {
    m = n;
    n = k; 
  }
  return t / n;
} 
//方法五： 
int lcm(int m, int n) {
  int s = 1;
  for (int i = 2; i <= m && i <= n; i++) {
    while (m % i == 0 || n % i == 0) {
      s *= i;
      if (m % i == 0) m /= i;
      if (n % i == 0) n /= i;
    }
  }
  s *= m * n;  
}

int lcm(int m, int n) {
  return m * n / gcd(m, n);
}
int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  printf("%d", lcm(m, n));
}
