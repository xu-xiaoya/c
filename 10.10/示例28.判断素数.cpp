#include<stdio.h>
int main() {
  int a, i;
  scanf("%d", &a);
  for (i = 2; i < a; i++)
    if (a % i == 0) 
      break;
  if (i < a)
    printf("%d不是素数", a);
  else
//在i = a表示a能被本身整除时为素数。
    printf("%d是素数", a); 
}
