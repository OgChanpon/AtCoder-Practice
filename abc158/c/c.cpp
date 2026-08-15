#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;

  for (int i = 0; i < 1001; i++) {
    int aa = i * 8 / 100;
    int bb = i * 10 / 100;
    if (aa == a && bb == b) {
      cout << i << "\n";
      return 0;
    }
  }

  cout << -1 << "\n";
  return 0;
}
