#include <iostream>
#include <vector>

using namespace std;

int vote(int n, int m, const vector<int> &a, int total) {
  int check = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] * 4 * m >= total) {
      check++;
      if (check == m) {
        return 1;
      }
    }
  }
  return 0;
}

int main(void) {
  int n, m;
  cin >> n >> m;
  int total = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }
  if (vote(n, m, a, total)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}
