#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n); 
//a[N][N] = {0}表示数组每个元素全为0. 
  int a[17][17] = {0};
//初始化每行边缘两个数为1 
  for (int i = 0; i < n; i++) 
    a[i][0] = a[i][i] = 1;
//行数与列数相同，由第二行开始计算 
  for (int i = 1; i < n; i++)
    for (int j = 1; j < i; j++)
    //下一行某个数是上行对应序号数与此序号前一个数之和 
      a[i][j] = a[i-1][j-1] + a[i-1][j];
//打印表格，外层i控制行数，内层j控制列数。 
  for (int i = 0; i < n; i++) {
/*用空格占位使表格美观，因为随着行数增加空格占位减少且应使用变量，
故此时用2*(n-i) 
*/ 
    for (int j = 0; j < 2*(n-i); j++) printf(" ");
    for (int j = 0; j <= i; j++)
//%4d控制两个数之间的间隔位置 
      printf("%4d", a[i][j]);
    printf("\n");
  }
} 
