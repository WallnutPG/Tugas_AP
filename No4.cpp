#include <iostream>
using namespace std;

int main() {
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    int square = i*i;
    sum += square;
  }

  cout << "Jumlah 10 bilangan kuadrat pertama adalah: " << sum << endl;

  return 0;
}
