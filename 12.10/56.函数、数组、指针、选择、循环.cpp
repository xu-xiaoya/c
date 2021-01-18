#include<stdio.h>
//standard library
#include<stdlib.h>
//随机数函数所需 
#include<time.h>
void setvalue(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < 10; i++)
  //随机生成两位数字，需要头文件stdlib和time 
    a[i] = rand() % 100;
}
void swap(int *x, int *y) {
  int t;
  t = *x; *x = *y; *y = t;
}
void selectsort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int k = i;
    for (int j = i+1; j < n; j++)
    //相当于冒泡排序，前后两个数字比较并交换 
      if (a[j] < a[k]) k = j;
    swap(&a[i], &a[k]);
  }
}
void print(int a[], int n) {
  //打印数组数字 
  for (int *p = a; p < a+n; p++)
    printf("%d ", *p);
  printf("\n");
}
int main() {
  int a[10];
  //随机生成10个随机两位数 
  setvalue(a, 10);
  //打印以上数字 
  print(a, 10);
  //排序以上数字 
  selectsort(a, 10);
  //再次打印 
  print(a, 10);
  
}
