#include<stdio.h>
#include<math.h>
//isprime��һ���ж������ĺ����� 
int isprime(int n) {
//return 0��ʾ�ǣ�return 1��ʾ�ǣ�
//1��������Ҳ���Ǻ��� 
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
