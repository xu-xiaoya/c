#include<stdio.h>
int main() {
  //�ַ�����[]Ϊ�ֽڳ��� 
  char a[100], b[100];
  //�ַ��������в���&���� 
  scanf("%s%s", a, b); 
  printf("%s %s", a, b);
} 

//������
#include<stdio.h>
int main() {
  char a[100];
  gets(a);
  puts(a);
}
/*���û�����س�֮��getchar�ſ�ʼ��stdio����ÿ�ζ���һ���ַ�
  getchar�����ķ���ֵ���û�������ַ���ASCII��
   �� 
  getchar();
*/ 
