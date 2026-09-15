#include <iostream>

using namespace std;

long long fizbuz(long long n) {
  long long total = 0;
  for (long long i = 0; i <= n; i++) {
    if (i % 3 != 0 && i % 5 != 0) {
      total += i;
    }
  }
  return total;
}

int main(void) {
  long long n;
  cin >> n;
  cout << fizbuz(n) << "\n";

  return 0;
}
