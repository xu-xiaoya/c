#include<stdio.h>
int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    int i, c = 0, a[30];
    //����0����� 
    if (n == 0)
      printf("0\n");
    else
      while (n != 0) {
    //��2ȡ�����������������Ƕ����Ƶı�ʾ�� 
        i = n % 2;
        a[c] = i;
        c++;
        n /= 2;
      }
    c--; 
    for ( ; c >= 0; c--) {
      printf("%d", a[c]);
    }	
    printf("\n");
  }
}
