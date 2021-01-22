#include<stdio.h>
/*leapyear：闰年 
闰年的规则如下：
①非整百年能被4整除的为闰年。（如2004年就是闰年,2010年不是闰年）
②整百年能被400整除的是闰年。(如2000年是闰年，1900年不是闰年) 
*/ 
int LeapYear(int y) {
//
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int main() {
  int year, month, day, s = 0;
  //每月的天数（因为下方for循环的int i从1开始，故此处0为无效） 
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  scanf("%d%d%d", &year, &month, &day);
//循环加该月之前天数再加该月日期天数 
  for (int i = 1; i < month; i++)
    s += a[i];
  s += day;
//如果是闰年且计算日期超过二月，天数加1。 
  if (LeapYear(year) && month > 2) s++;
  printf("%d", s);
}
