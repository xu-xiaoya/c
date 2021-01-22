#include <iostream>
using namespace std;
const int N = 1000;
//预期输入数据的范围 
int a[N] = {0, 1};
int main () {
//除去多余的因子，化为数字的最简式最为基本因子。 
  for (int i = 2; i <= N; i++) {
    a[i] = i;
    for (int j = 1; j < i; j++)
      if(a[i] % a[j] == 0) a[i] /= a[j];
  }
  int n;
  while (cin >> n) {
    int s = 1;
//直接将剩下的基本因子相乘即为最小公倍数 
    for (int i = 2; i <= n; i++) s *= a[i];
    cout << s << endl;
  }
}

