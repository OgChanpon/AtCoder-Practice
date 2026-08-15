#include <iostream>

using namespace std;

bool coffee(string n) { return (n[2] == n[3] && n[4] == n[5]); }

int main(void) {
  string s;
  cin >> s;

  if (coffee(s)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }

  return 0;
}
