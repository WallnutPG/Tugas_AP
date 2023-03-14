#include <iostream>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + sum(n-1);
  }
}

int main() {
  int n = 5;

  int result = sum(n);

  cout << "Hasil penjumlahan deret S = 1+2+3+4+5 adalah: " << result << endl;

  return 0;
}
