#include <stdio.h>
int main() {
  int a;
  int count = 0;
  scanf("%d", &a);
//����int������0��ͷ��С����Ϊ0 
  while (a != 0) {
    a /= 10;
    count++;
  }
  printf("%d", count);
}

