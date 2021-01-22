#include<stdio.h>
int LeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
//�����ڵ�������� 
int DatetoInt(int year, int month, int day) {
  int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int s = 0, k = year - 1;
  for (int i = 0; i < month; i++) s += a[i];
  if (LeapYear(year) && month > 2) s++;
  s += day;
  s += k * 365 + k / 4 - k / 100 + k / 400;
  return s; 
}  
//������ڼ� 
int DayOfWeek(int year, int month, int day) {
  return DatetoInt(year, month, day) % 7;
} 
int main() {
  int year, month;
  int MonthDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//¼������·� 
  scanf("%d%d", &year, &month);
  printf("%18d��%d��\n\n", year, month);
  printf("   ��   һ   ��   ��   ��   ��   ��\n");
//����һ�����ڼ� 
  int firstday = DayOfWeek(year, month, 1);
//���ݵ�һ�����ڼ���ռ��һ�пո�λ�á� 
  for(int i = 0; i < firstday; i++) printf("   ");
  int sumday = MonthDay[month];
//�������+1 
  if (LeapYear(year) && month == 2) sumday++;
//���ÿ����1�����һ�� 
  for (int i = 1; i <= sumday; i++) {
    printf("%5d", i);
/*firstday�Ǳ�������һ��Ҫ��i����Ϊ7-firstday��
  ���������һ�ж���Ҫ7����
  ����ĳ��ĳ��1��Ϊ����һ�����һ��������Ҫ6����i=6,6+1%7=0��
  �ڶ���7�������һ��Ϊi=13��13+1%7=0; �Դ����ơ�*/
    if ((i + firstday) % 7 == 0 ) printf("\n"); 
  } 
}
