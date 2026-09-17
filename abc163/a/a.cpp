#include <iostream>

using namespace std;

double cp(int r) { return 2 * r * 3.14159265358979323846; }

int main(void) {
  int r;
  cin >> r;
  cout << cp(r) << "\n";

  return 0;
}
