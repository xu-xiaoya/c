#include<stdio.h>
int main() {
  int score, N, y = 0, j = 0, b = 0;
  scanf("%d", &N);
  while(N--) {
    scanf("%d", &score);
    if (score >= 80) {
      y++;
    } else if (score >= 60) {
      j++;
    } else if (score > 0) {
      b++;
    }
  }
  printf("优良人数：%d，及格人数：%d，不及格人数：%d", y, j, b);
}
