#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
//将日期的天数算出 
int DatetoInt(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s = 0, k = year - 1;
  for (int i = 0; i < month; i++) s += a[i];
  if (LeapYear(year) && month > 2) s++;
  s += day;
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s; 
}  
//算出星期几 
int DayOfWeek(int year, int month, int day) {
  return DatetoInt(year, month, day) % 7;
} 
int main() {
  int year, month;
  int MonthDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//录入年份月份 
  scanf("%d%d", &year, &month);
  printf("%18d年%d月\n\n", year, month);
  printf("   日   一   二   三   四   五   六\n");
//计算一号星期几 
  int firstday = DayOfWeek(year, month, 1);
//根据第一天星期几来占第一行空格位置。 
  for(int i = 0; i < firstday; i++) printf("   ");
  int sumday = MonthDay[month];
//闰年二月+1 
  if (LeapYear(year) && month == 2) sumday++;
//输出每个月1到最后一日 
  for (int i = 1; i <= sumday; i++) {
    printf("%5d", i);
/*firstday是变量，第一行要的i数量为7-firstday，
  其他除最后一行都需要7个。
  例：某年某月1日为星期一，则第一行填满需要6个，i=6,6+1%7=0；
  第二行7个，最后一个为i=13，13+1%7=0; 以此类推。*/
    if ((i + firstday) % 7 == 0 ) printf("\n"); 
  } 
}
