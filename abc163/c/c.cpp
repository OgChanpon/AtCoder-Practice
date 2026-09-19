#include <iostream>
#include <vector>

using namespace std;

void manage(int n, vector<int> &a, vector<int> &res) {
  for (int i = 0; i < n - 1; i++) {
    res[a[i]] += 1;
  }
}

int main(void) {
  int n;
  cin >> n;
  vector<int> a(n + 1, 0);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  vector<int> res(n + 1, 0);
  manage(n, a, res);
  for (int i = 1; i < n + 1; i++) {
    cout << res[i] << "\n";
  }
  return 0;
}
