#include <iostream>

using namespace std;

string battle(int a, int b, int c, int d) {
  while (1) {
    c -= b;
    if (c <= 0) {
      return "Yes";
    }
    a -= d;
    if (a <= 0) {
      return "No";
    }
  }
}

int main(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << battle(a, b, c, d) << "\n";

  return 0;
}
