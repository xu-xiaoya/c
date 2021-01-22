#include<stdio.h>
#include<math.h>
int main() {
  double a, b, c, d, x1, x2;
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a == 0) {
    if (b == 0) 
      printf("错误\n"); 
    else 
      printf("x=%f\n", -c/b);
  } else {
//d为△ 
    d = b * b - 4 * a * c;
    if (fabs(d) <= 1e-6) {
      printf("x1=x2=%f\n", -b/(2*a));
    } else if (d > 1e-6) {
//求根公式： x=(-b±√△)/2a
      x1 = (-b + sqrt(d)) / (2*a);
      x2 = (b + sqrt(d)) / (2*a);
      printf("x1=%f,x2=%f\n", x1, x2); 
    } else {
      printf("方程无实根\n");
    }
  }
}
