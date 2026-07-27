#include <iostream>

using namespace std;

double vmax(double wa) { return wa / 3.0 * wa / 3.0 * wa / 3.0; }

int main(void) {
  int l;
  cin >> l;
  printf("%lf\n", vmax(l));

  return 0;
}
