#include<stdio.h>
int main() {
	int n, a[100][100] = {0}, count = 1, m = 1;
	scanf("%d", &n);
	for (int j = 1; j <= m; j++, m++) {
  	for (int i = j; i <= n; i++) {
		  a[i][j] = count;
	    count++;
  	}
  	if (m >= n) break;
  }
  for (int i = 1; i <= n; i++ ) {
    for (int j = 1; j <= i; j++) {
    	printf("%-4d", a[i][j]);
		}
		printf("\n");
  }
} 
