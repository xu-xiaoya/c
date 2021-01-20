#include<stdio.h>
#include<string.h>
int main() {
  int x = 0, d = 0;
  char a[100];
  while (gets(a)) {
    for (int i = 0; i < strlen(a); i++) {
      if (a[i] >= 'a' && a[i] <= 'z') 
        x++;
      if (a[i] >= 'A' && a[i] <= 'Z') 
        d++;
    }
    printf("%d %d", x, d); 
  }
}
