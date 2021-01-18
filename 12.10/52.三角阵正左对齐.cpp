#include<stdio.h>
int main() {
	int n, a[20][20] = {0}, num = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
		  a[i][j] = num;
		  num++;
    } 
	}
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++)
    	printf("%-4d", a[i][j]); 
		//一行每列输入完即换行 
		printf("\n");
	} 
}  

