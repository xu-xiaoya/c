#include<stdio.h>
int main() {
  int a[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10}, *p, i;
  //① 
  for (i = 0; i < 10; i++) printf("%d ", a[i]);
  //②a + i 就是指向a中第i个元素的指针 
  for (i = 0; i < 10; i++) printf("%d ", *(a+i));
  //③
  p = a; 
  for (i = 0; i < 10; i++) printf("%d ", p[i]);  
  //④a存放在p中，p+i就是指向p中第i个元素的指针 
  p = a;
  for (i = 0; i < 10; i++) printf("%d ", *(p+i));
  //⑤
  p = a;
  for (i = 0; i < 10; i++) {
    printf("%d ", *p);
    p++;
  }
  //⑥6为5的简化版，可写成*p++ 
  p = a;
  for (i = 0; i < 10; i++) printf("%d ", *p++)
  //
  /*p=a相当于让指针一开始指向a的首地址，然后p++，
  遍历a~a+10。 
  */ 
  for (p = a; p < a + 10; p++) printf("%d ", *p);
  //⑧循环变式 
  p = a;
  while (p < a + 10) {
    printf("%d ", *p);
    p++;
  }  
  //⑨
  p = a;
  while (p < a + 10) printf("%d ", *p++); 
} 
