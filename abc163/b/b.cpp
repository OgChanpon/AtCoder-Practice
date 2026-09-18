#include <iostream>
#include <vector>

using namespace std;

int homework(int n, int m, const vector<int> &a) {
  int res = 0;
  for (int i = 0; i < m; i++) {
    res += a[i];
  }
  if (res <= n) {
    return n - res;
  } else {
    return -1;
  }
}

int main(void) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  cout << homework(n, m, a) << "\n";

  return 0;
}
