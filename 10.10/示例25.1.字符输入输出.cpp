#include<stdio.h>
int main() {
  char a, b;
  scanf("%c%c", &a, &b);
  printf("%c %c", a, b);
}

#include<stdio.h>
int main() {
  int ch;
//char c;
//c = getchar();
//getchar()�÷����ϣ�ֻ����һ���ַ�����������Ҳ���ַ�����
//�������һ���ַ�ʱ��ֻ���յ�һ���ַ���
  while ((ch = getchar()) != '\n') 
//putchar �������ַ��������.
  putchar(ch);
}
