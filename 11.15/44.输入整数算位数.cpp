#include <stdio.h>
int main() {
  int a;
  int count = 0;
  scanf("%d", &a);
//当在int类型下0开头的小数即为0 
  while (a != 0) {
    a /= 10;
    count++;
  }
  printf("%d", count);
}

