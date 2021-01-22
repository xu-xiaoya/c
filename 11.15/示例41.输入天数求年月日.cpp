#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int main() {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s;
  scanf("%d", &s);
// ?取值，：后不取值。 
//第一次判断是否闰年，以判断是否满足后续循环条件。 
  int y = 1, days = LeapYear(y) ? 366 : 365;
//当s大于本年天数就减去，年份+1 
  while (s > days) {
    s -= days;
    y++;
//循环内再次判断是否闰年天数，更新每年天数。 
    days = LeapYear(y) ? 366 : 365;
  }
//判断日期当年是否闰年，若是则二月29日。 
  if (LeapYear(y)) a[2] = 29;
  int m = 1;
//减每月天数，判断为哪个月，s超过月天数则减去，月+1； 
  while (s > a[m]) {
    s -= a[m];
    m++;
  }
//y年，m月，s为总天数减去已过去年份天数和当年已过的月份天数剩下的值，即为日。 
  printf("%d %d %d", y, m, s);
}
