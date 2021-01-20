#include<stdio.h>
#include<math.h>
const int N = 1000;
int main() {
  int a[N+1] = {0};
  int s = sqrt(N);
  for (int i = 2; i <= s; i++) 
    if (a[i] == 0)
//筛出2.3.4……倍数的数，剩下则为素数。 
//此时2，3为素数，故k设初值为2*i = 4，2不进入循环。 
      for (int k = 2*i; k <= N; k += i)
        a[k] = 1;
  for (int i = 2; i <= N; i++)
    if (a[i] == 0)
      printf("%5d", i);
}
