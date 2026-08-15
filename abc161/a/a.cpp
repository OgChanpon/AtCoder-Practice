#include <iostream>

using namespace std;

void swap(int x, int y, int z) { cout << z << " " << x << " " << y << "\n"; }

int main(void) {
  int x, y, z;
  cin >> x >> y >> z;
  swap(x, y, z);
  return 0;
}
