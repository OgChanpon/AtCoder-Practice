#include <iostream>

using namespace std;

bool luck(string n) {
  for (int i = 0; i < 3; i++) {
    if (n[i] == '7') {
      return true;
    }
  }
  return false;
}

int main(void) {
  string n;
  cin >> n;

  if (luck(n)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}
