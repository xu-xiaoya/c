#include<stdio.h>
int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    //i¿ØÖÆÐÐÊý 
    for (int i = 0; i < n; i++) {
      /*i = 0, j = 0;i = 1; j = 2;
      ¡új = 2 * i
      */
      for (int j = 0; j < n-1-i; j++)
        printf(" ") ;
      for (int j = 0; j <= 2 * i; j++)
        printf("*");
      printf("\n");
    }
  }
  return 0;
}
