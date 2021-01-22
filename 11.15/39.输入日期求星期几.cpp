#include<stdio.h>
int LeapYear(int y){
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int DaytoInt(int year, int month, int day){
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s = 0, k = year - 1;
  for (int i = 0; i < month; i++) s += a[i];
  s += day;
  if (LeapYear(year) && month > 2) s++;
  s += k * 365 + k / 4 - k / 100 + k / 400;
//s整除一个星期的天数为余0则为星期天，1星期一……以此类推。 
  s %= 7;
  return s;
}
int main() {
  int year, month, day;
  scanf("%d%d%d", &year, &month, &day);
  //优化：printf("%d\n", DaytoInt(year, month, day) % 7); 
  switch (DaytoInt(year, month, day)) {
    case 0: printf("星期天"); break;
    case 1: printf("星期一"); break;
    case 2: printf("星期二"); break;
    case 3: printf("星期三"); break;
    case 4: printf("星期四"); break;
    case 5: printf("星期五"); break;
    case 6: printf("星期六"); break;
  }
} 
