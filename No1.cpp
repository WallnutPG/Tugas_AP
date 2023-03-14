#include <iostream>
using namespace std;

int main() {
  int a, b, temp;

  cout << "Masukkan nilai a: ";
  cin >> a;

  cout << "Masukkan nilai b: ";
  cin >> b;

  temp = a;
  a = b;
  b = temp;

  cout << "Setelah ditukar:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}
