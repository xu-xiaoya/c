#include<stdio.h>
void swap(int *x, int *y) {
  int t;
  //tΪ��ʱ�������ݴ�x��y�е�ĳ��ֵ 
  t = *x; *x = *y; *y = t;
}
int main() {
  int a= 10, b = 20;
  swap(&a, &b);
  printf("%d %d", a, b);
}
