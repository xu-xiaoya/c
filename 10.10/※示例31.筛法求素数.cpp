#include<stdio.h>
#include<math.h>
const int N = 1000;
int main() {
  int a[N+1] = {0};
  int s = sqrt(N);
  for (int i = 2; i <= s; i++) 
    if (a[i] == 0)
//ɸ��2.3.4��������������ʣ����Ϊ������ 
//��ʱ2��3Ϊ��������k���ֵΪ2*i = 4��2������ѭ���� 
      for (int k = 2*i; k <= N; k += i)
        a[k] = 1;
  for (int i = 2; i <= N; i++)
    if (a[i] == 0)
      printf("%5d", i);
}
