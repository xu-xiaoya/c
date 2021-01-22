#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int DatetoInt(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//将输入转化为天数：
  int k = year - 1, s = 0;
  for (int i = 1; i < month; i++) s += a[i];
  if (LeapYear(year) && month > 2) s++;
  s += day; 
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s;
}
int main() {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int year, month, day, n, s;
//将日期加上n 
  scanf("%d%d%d", &year, &month, &day);
  printf("%d\n", DatetoInt(year, month, day));
  s = DatetoInt(year, month, day);
  scanf("%d", &n);
  s += n;
//总天数s再转换为年月日
  int y = 1, days = LeapYear(y) ? 366 : 365;
  while (s > days) {
    s -= days;
    y++;
    days = LeapYear(y) ? 366 : 365;
  }
  int m = 1;
  if (LeapYear(y)) a[2] = 29;
  while (s > a[m]) {
    s -= a[m];
    m++;
  }
  printf("%d %d %d", y, m, s);
}
