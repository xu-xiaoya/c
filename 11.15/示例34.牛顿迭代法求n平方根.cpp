/*
函数 f(x) = x^2 - n，求 f(x) = 0 的根。
f'(x0) = f(x0) / (x0 - x1)   ==>   x1 = x0 - f(x0) / f'(x0)
代入f(x) = x^2 - n,
牛顿迭代公式：x1 = (x0 + n / x0) / 2
*/  
#include<stdio.h>
double sqrt(int n) {
  double x0, x = n;
  do {
    x0 = x;
    x = (x0 + n / x0) / 2; 
//算出的Xn和X（n+1）的差的绝对值小于某个值，即认为找到了精确的平方根。
  } while (x0 - x > 1e-16);
  return x;
}
int main() {
  int n;
  while (scanf("%d", &n), n)
  printf("%.15f\n", sqrt(n));
}

/*示例：
求6的平方根，xn和xn+1差小于0.001时精确。
①首先猜测一个值x，x1=6/2=3
②代入公式x2=(3+6/3)/2=2.5,3-2.5>0.001
③重复步骤，x3=(2.5+6/2.5)/2=2.45，2.5-2.45=0.5>0.001 
④重复步骤，x4=(2.45+6/2.45)/2=2.4495，2.45-2.4495=0.0005<0.001 
④算出最后答案是2.4495 
*/ 
