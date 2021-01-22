#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int Day(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s = 0, k = year - 1;
  for (int i = 0; i < month; i++) s += a[i];
  s += day;
  if (LeapYear(year) && month > 2) s++;
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s;  
}
int Max(int x, int y) {
  if (x > y) return x - y;
  else return y - x;
}
int main() {
  int year, month, day, t, u; 
  for (int i = 0; i < 2; i++) {
    scanf("%d%d%d", &year, &month, &day);
    if(i == 0)
      t = Day(year, month, day);
    else
      u = Day(year, month, day);
  }
  printf("%d", Max(t, u));
}
