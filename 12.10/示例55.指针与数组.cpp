#include<stdio.h>
int main() {
  int a[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10}, *p, i;
  //�� 
  for (i = 0; i < 10; i++) printf("%d ", a[i]);
  //��a + i ����ָ��a�е�i��Ԫ�ص�ָ�� 
  for (i = 0; i < 10; i++) printf("%d ", *(a+i));
  //��
  p = a; 
  for (i = 0; i < 10; i++) printf("%d ", p[i]);  
  //��a�����p�У�p+i����ָ��p�е�i��Ԫ�ص�ָ�� 
  p = a;
  for (i = 0; i < 10; i++) printf("%d ", *(p+i));
  //��
  p = a;
  for (i = 0; i < 10; i++) {
    printf("%d ", *p);
    p++;
  }
  //��6Ϊ5�ļ򻯰棬��д��*p++ 
  p = a;
  for (i = 0; i < 10; i++) printf("%d ", *p++)
  //
  /*p=a�൱����ָ��һ��ʼָ��a���׵�ַ��Ȼ��p++��
  ����a~a+10�� 
  */ 
  for (p = a; p < a + 10; p++) printf("%d ", *p);
  //��ѭ����ʽ 
  p = a;
  while (p < a + 10) {
    printf("%d ", *p);
    p++;
  }  
  //��
  p = a;
  while (p < a + 10) printf("%d ", *p++); 
} 
