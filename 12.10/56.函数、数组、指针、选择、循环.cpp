#include<stdio.h>
//standard library
#include<stdlib.h>
//������������� 
#include<time.h>
void setvalue(int a[], int n) {
  srand(time(0));
  for (int i = 0; i < 10; i++)
  //���������λ���֣���Ҫͷ�ļ�stdlib��time 
    a[i] = rand() % 100;
}
void swap(int *x, int *y) {
  int t;
  t = *x; *x = *y; *y = t;
}
void selectsort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int k = i;
    for (int j = i+1; j < n; j++)
    //�൱��ð������ǰ���������ֱȽϲ����� 
      if (a[j] < a[k]) k = j;
    swap(&a[i], &a[k]);
  }
}
void print(int a[], int n) {
  //��ӡ�������� 
  for (int *p = a; p < a+n; p++)
    printf("%d ", *p);
  printf("\n");
}
int main() {
  int a[10];
  //�������10�������λ�� 
  setvalue(a, 10);
  //��ӡ�������� 
  print(a, 10);
  //������������ 
  selectsort(a, 10);
  //�ٴδ�ӡ 
  print(a, 10);
  
}
