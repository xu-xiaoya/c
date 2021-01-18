#include<stdio.h>
int main() {
	int n, a[20][20] = {0}, num = 1;
	scanf("%d", &n);
	int count = n;
  for (int i = 0; i < n; i++) {
  	for (int j = 0; j < count-i; j++) {
  		a[i][j] = num;
  		num++;
		}
	}
	for (int i = 0; i < n; i++) {
		//n+4i为右对齐，n+2i为居中 
		for (int j = 0; j < n + 4 * i; j++) printf(" ");
		for (int j = 0; j < count-i; j++)
      printf("%-4d", a[i][j]);
    printf("\n");
	}
}
