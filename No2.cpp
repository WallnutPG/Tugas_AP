#include <iostream>
using namespace std;

int main() {
  int a, b, n, hasil;

  cout << "Masukkan suku pertama (a): ";
  cin >> a;

  cout << "Masukkan beda (b): ";
  cin >> b;

  cout << "Masukkan suku ke-n yang ingin dihitung: ";
  cin >> n;

  hasil = a + (n - 1) * b;

  cout << "Suku ke-" << n << " dari deret aritmatika adalah: " << hasil << endl;

  return 0;
}
