#include <iostream>
using namespace std;
const int N = 1000;
//Ԥ���������ݵķ�Χ 
int a[N] = {0, 1};
int main () {
//��ȥ��������ӣ���Ϊ���ֵ����ʽ��Ϊ�������ӡ� 
  for (int i = 2; i <= N; i++) {
    a[i] = i;
    for (int j = 1; j < i; j++)
      if(a[i] % a[j] == 0) a[i] /= a[j];
  }
  int n;
  while (cin >> n) {
    int s = 1;
//ֱ�ӽ�ʣ�µĻ���������˼�Ϊ��С������ 
    for (int i = 2; i <= n; i++) s *= a[i];
    cout << s << endl;
  }
}

