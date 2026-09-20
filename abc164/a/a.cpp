#include <iostream>

using namespace std;

bool sheepwolf(int s, int w) { return s <= w; }

int main(void) {
  int s, w;
  cin >> s >> w;
  if (sheepwolf(s, w)) {
    cout << "unsafe\n";
  } else {
    cout << "safe\n";
  }
  return 0;
}
