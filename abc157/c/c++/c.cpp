#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> rules;
  for (int i = 0; i < m; i++) {
    int s, c;
    cin >> s >> c;
    rules.push_back({s, c});
  }

  for (int i = 0; i < 1000; i++) {
    string str = to_string(i);
    if (str.length() == n) {
      bool flag = true;

      for (auto rule : rules) {
        if (str[rule.first - 1] - '0' != rule.second) {
          flag = false;
          break;
        }
      }
      if (flag) {
        cout << i << "\n";
        return 0;
      }
    }
  }
  cout << -1 << "\n";
  return 0;
}
