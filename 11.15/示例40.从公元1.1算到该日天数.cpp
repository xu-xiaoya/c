#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int DatetoInt(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  //k=year-1为本年之前的年总数 
  int s = 0, k = year - 1;
  //加上本年本月之前的月数天数 
  for (int i = 1; i < month; i++) s += a[i];
  //判断该年是否闰年，若闰年天数+1 
  if (LeapYear(year) && month > 2) s++;
  //本月天数 
  s += day;
  //加上之前年总数的天数并计算闰年年数，+1 
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s;
}
int main() {
  int year, month, day;
  scanf("%d%d%d", &year, &month, &day);
  printf("%d\n", DatetoInt(year, month, day));
}

