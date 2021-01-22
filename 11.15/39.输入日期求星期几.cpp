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
//s����һ�����ڵ�����Ϊ��0��Ϊ�����죬1����һ�����Դ����ơ� 
  s %= 7;
  return s;
}
int main() {
  int year, month, day;
  scanf("%d%d%d", &year, &month, &day);
  //�Ż���printf("%d\n", DaytoInt(year, month, day) % 7); 
  switch (DaytoInt(year, month, day)) {
    case 0: printf("������"); break;
    case 1: printf("����һ"); break;
    case 2: printf("���ڶ�"); break;
    case 3: printf("������"); break;
    case 4: printf("������"); break;
    case 5: printf("������"); break;
    case 6: printf("������"); break;
  }
} 
