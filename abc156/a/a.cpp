#include <iostream>

using namespace std;

int main(){
  int n, r;
  cin >> n >> r;

  n >= 10 ? cout << r << "\n" : cout << r + 100 * (10 - n) << "\n";

  return 0;
}
