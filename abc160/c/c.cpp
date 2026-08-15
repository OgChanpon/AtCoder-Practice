#include <iostream>
#include <vector>

using namespace std;

int travel(int k, const vector<int> &a) {
  int m = 0;
  int n = a.size();
  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      m = max(m, a[i + 1] - a[i]);
    } else {
      m = max(m, k - a[i] + a[0]);
    }
  }

  return k - m;
}

int main(void) {
  int k, n;
  cin >> k >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << travel(k, a) << "\n";

  return 0;
}
