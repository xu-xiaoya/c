#include<iostream>
using namespace std;
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    int s = a;
    while (s % b != 0 || s % c != 0) s += a;
    cout << s << endl; 
  }
}

//方法二：
#include<iostream>
using namespace std;
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    int s = 1;
    for (int i = 2; i <= a && i <= b && i <= c; i++) {
      while (a % i ==0 || b % i == 0 || c % i == 0) {
        s *= i;
        if (a % i == 0) a /= i;
        if (b % i == 0) b /= i;
        if (c % i == 0) c /= i;  
      }
      s *= a * b * c;
      cout << s << endl; 
    } 
  }
} 
//方法三：
#include<iostream>
using namespace std;
int lcm(int n) {
  for (int i = 2; i <= a && i <= b && i <= c; i++) {
    while (a % i ==0 || b % i == 0 || c % i == 0) {
      s *= i;
      if (a % i == 0) a /= i;
      if (b % i == 0) b /= i;
      if (c % i == 0) c /= i;  
    }
  return s;
} 
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    cout << lcm(lcm(a, b), c) <<endl;
  }
}
