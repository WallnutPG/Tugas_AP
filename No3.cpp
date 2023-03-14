#include <iostream>
using namespace std;

int main() {
  int n, fib, a = 0, b = 1;

  cout << "Masukkan nilai n: ";
  cin >> n;

  if (n == 0) {
    fib = a;
  } else if (n == 1) {
    fib = b;
  } else {
    for (int i = 2; i <= n; i++) {
      fib = a + b;
      a = b;
      b = fib;
    }
  }

  cout << "Suku ke-" << n << " dari deret Fibonacci adalah: " << fib << endl;

  return 0;
}
