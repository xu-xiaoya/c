#include<stdio.h>  
//Ñ­»··¨ 
int sum_num(int num) {  
  int sum=0;  
  while (num >= 1) {  
    sum += num % 10;  
    num /= 10;  
  }
  return sum;  
}  
int main() {  
  int sum = 0, num;  
  scanf("%d", &num);   
  sum = sum_num(num);  
  printf("%d\n", sum);
}
