//此例为A移到C 
#include<stdio.h>
void move(int n, char A, char B, char C) {
  if (n == 1) {
    printf("%c→%c\n", A, C);
  } else {
/*要实现最大的盘子从A移到C，表示A只有最大盘且C无盘子,
说明其他n-1个盘子全部在B。
第一步, 将A上面的n-1个盘子(最大盘不动)借助C塔移动到B塔。*/ 
    move(n-1, A, C, B);
    //第二步：把A的最后大盘移到C 
    printf("%c→ %c\n", A, C); 
/*C塔的盘子比B塔的所有盘子都大, 所以是可以忽略掉C盘的那个
最大的盘子的。
第三步：将B上面的所有盘子(n-1)个盘子借助A塔移动到C塔 
*/ 
    move(n-1, B, A, C);
  }
}
int main() {
  int n;
  scanf("%d", &n);
  move(n, 'A', 'B', 'C');
}
