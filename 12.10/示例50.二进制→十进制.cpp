#include<stdio.h>
#include<string.h>
int main() {
  char s[50];
  gets(s);
  int sum = 0, k = 1;
  for (int i = strlen(s) - 1; i >= 0; i--) {
//-'0'��ʾ��Ϊ���� 
    sum += k * (s[i] - '0');
//��һ�֣�x1 * 2^0�� �ڶ��֣�x2 * 2^1 �����֣�x3 * 2^3
//��Ӽ�Ϊʮ�������� 
    k *= 2;
  }
  printf("%d", sum);
}
