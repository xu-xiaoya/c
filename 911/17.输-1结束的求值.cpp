#include<stdio.h>
int main() {
  int num, i = 0, sum = 0, max, min;
  double ave;
  scanf("%d", &num);
  max = num;
  min = num;
  while (num != -1) {
    sum += num;
    if (num > max) {
      max = num;
    } 
    if (num < min) {
      min = num; 
    }
    i++;
    scanf("%d", &num);
  }
  if (i != 0) {
    ave = sum / i;
    printf("����%d�����ֵ��%d����Сֵ��%d���ܺͣ�%d��ƽ��ֵ��%.2f\n", i, max, min, sum, ave);
  }
}
