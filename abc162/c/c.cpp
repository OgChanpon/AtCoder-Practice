#include <iostream>
#include <numeric>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int res = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        res += gcd(gcd(i, j), k);
      }
    }
  }
  cout << res << "\n";

  return 0;
}
