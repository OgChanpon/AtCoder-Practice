#include <iostream>

using namespace std;

int main() {
  int n, k, cnt = 0;
  cin >> n >> k;

  while (n > 0) {
    cnt++;
    n /= k;
  }

  cout << cnt << "\n";

  return 0;
}
