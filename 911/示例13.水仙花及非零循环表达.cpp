#include<stdio.h>
int main() {
  int n, a, b, c;
  scanf("%d", &n);
  a = n / 100 % 10;
  b = n / 10 % 10; 
  c = n % 10;
  if (n == a*a*a + b*b*b + c*c*c) {
    printf("Yes!\n");
  } else {
    printf("No!\n");
  }
}


//�ڶ��ַ�����
#include<stdio.h>
int main() {
  int n, a, b, c;
  // while (scanf("%d", &n), n)ѭ������һ��ֵ��
  //����n����nֵΪ���һ�������nֵ�� ��0��ѭ����0��������
  while (scanf("%d", &n), n) {
    // ��n���д���
    a = n / 100 % 10;
    b = n / 10 % 10; 
    c = n % 10;
    if (n == a*a*a + b*b*b + c*c*c) {
      printf("Yes!\n");
    } else {
      printf("No!\n");
    }
  }
} 

//��0������ѭ��3
#include<stdio.h>
int main() {
  int a, b;
  while (scanf("%d%d", &a, &b), a || b) {
    // ��a��b���д���
  }
} 

