//����һ(ѭ������)�� 
#include<stdio.h>
int main() {
  while (1) {
  int n, a[100], k = 0;
  //��10���ƵĶ�Ӧ��ϵ��:0-9��Ӧ0-9;A-F��Ӧ10-15
  char s[] = "0123456789ABCDEF";
  scanf("%d", &n);
  while (n) {
    //++Ϊ�����걾��ָ���k += 1�� 
    a[k++] = n % 16;
    n /= 16; 
  }
  for (int i = k - 1; i >= 0; i--)
    printf("%c", s[a[i]]);
  printf("\n");
  }
}
//���������ݹ飩��
#include<stdio.h>
char c[] = "0123456789ABCDEF";
void show(int n) {
  if (n > 0) {
    show(n / 16);
    printf("%c", c[n % 16]);
  } 
}
int main() {
  int n;
  while (~scanf("%d", &n)) {
    show(n);
    printf("\n");
  }
} 
