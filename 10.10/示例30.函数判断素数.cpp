#include<stdio.h>
#include<math.h>
//isprime是一种判断素数的函数。 
int isprime(int n) {
//return 0表示非，return 1表示是，
//1不是素数也不是合数 
  if (n == 1) return 0;
  int k = sqrt(n);
  for (int i = 2; i <= k; i++) 
    if (n % i == 0) return 0;
  return 1; 
}
int main() {
  for (int n = 2; n <= 1000; n++) 
    if (isprime(n))
      printf("%-4d", n);
}
