#include<iostream>
using namespace std;
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    int s = 1;
    for (int i = 2; i <= a && i <= b && i <= c; i++) {
      while (a % i == 0 && b % i == 0 && c % i == 0) {
        s *= i;
        a /= i;
        b /= i;
        c /= i;
      }
    } 
    cout << s << endl;
  } 
}

//·¨¶þ£º
int gcd(int a, int b) {
  int s = 1;
  for (int i = 2; i <= a && i <= b; i++) {
    while (a % i == 0 && b % i == 0) {
      s *= i;
      a /= i;
      b /= i;
    }
  }
  return s;
}
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    cout << gcd(gcd(a, b), c) << endl;
  }
} 
