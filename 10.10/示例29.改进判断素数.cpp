#include<stdio.h>
#include<math.h>
int main() {
  int a, i, flag = 1;
  scanf("%d", &a);
//sqrt()Ϊ�������� 
  int k = sqrt(a);
  for (i = 2; i <= k; i++) {
    if (a % i == 0) {
      flag = 0;
      break;
    }
  }
//if(flag)��ʾ��flagΪ0ʱ��ִ�У�Ϊ1ʱִ�� 
  if (flag)
    printf("%d��������", a);
  else 
    printf("%d������", a); 
} 
