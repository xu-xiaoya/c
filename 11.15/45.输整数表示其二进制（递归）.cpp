#include<stdio.h>
//����ȡ������������Ϊ0ʱֹͣ��������������ֵ����������  
void binary(int n) {
/*
n=6,n>1,      printf("0");
n=3,n>1,  printf("1");�� 
      printf("1");��
      n<1�������ٷ���֮ǰ���õĺ��� 
      */ 
  if (n > 1)
    binary(n / 2);
    printf("%d", n % 2);
}
int main() {
  int n;
  scanf("%d", &n);
  binary(n);
  printf("\n");
}
