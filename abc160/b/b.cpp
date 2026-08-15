#include <iostream>

using namespace std;

int coin(int n) { return 1000 * (n / 500) + 5 * ((n % 500) / 5); }

int main(void) {
  int x;
  cin >> x;

  cout << coin(x) << "\n";

  return 0;
}
