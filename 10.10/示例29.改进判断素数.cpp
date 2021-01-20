#include<stdio.h>
#include<math.h>
int main() {
  int a, i, flag = 1;
  scanf("%d", &a);
//sqrt()为开方函数 
  int k = sqrt(a);
  for (i = 2; i <= k; i++) {
    if (a % i == 0) {
      flag = 0;
      break;
    }
  }
//if(flag)表示当flag为0时不执行，为1时执行 
  if (flag)
    printf("%d不是素数", a);
  else 
    printf("%d是素数", a); 
} 
