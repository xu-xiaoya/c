/*
#include<iostream>
using namespace std;
int main() {
  int a, b, c, d, e;
  //cinΪ���뺯�� 
  cin >> a >> b >> c >> d >> e;
  //swap�������� 
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (c > d) swap(c, d);
  if (d > e) swap(d, e);
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (c > d) swap(c, d);
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b); 
  //coutΪ������� 
  cout << a << " " << b << " " << c << " " << d << " " << e << " " << endl;
}
//endlΪ���� 
*/
//ѭ������
#include<iostream>
using namespace std;
int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5-i; j++) {
      if (a[j] > a[j+1]) swap(a[j], a[j+1]);
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << a[i] <<" ";
  }
} 
