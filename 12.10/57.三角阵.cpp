#include<stdio.h>
int main() {
	int n, a[100][100], count = 1, m = 1;
	scanf("%d", &n);
	//���ÿ��i���䣬j�ı䣬�������� 
  for (int i = 0; i < m; i++, m++) {
    for (int j = 0; j < n-i; j++) {
      a[j][i] = count++;
    }
    printf("\n");
    if (m >= n) break;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n+3*i; j++) printf(" ");
    for (int j = 0; j < n-i; j++) {
    	printf("%-2d ", a[i][j]);
		}
		printf("\n");
  }
} 
