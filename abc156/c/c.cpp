#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  int ans = 100000000, tmp = 0;

  for (int i = 1; i < 101; i++) {
    for (int j : x) {
      tmp += (j - i) * (j - i);
    }
    if (ans > tmp) {
      ans = tmp;
    }
    tmp = 0;
  }

  cout << ans << "\n";

  return 0;
}
