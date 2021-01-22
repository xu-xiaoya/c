#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int DatetoInt(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s = 0, k = year - 1;
  for (int i = 1; i < month; i++) s += a[i];
  if (LeapYear(year) && month > 2) s++;
  s += day;
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s;
}
int main() {
  int year, month, day;
  scanf("%d%d%d", &year, &month, &day);
  printf("%d\n", DatetoInt(year, month, day));
}

