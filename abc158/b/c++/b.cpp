#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
  long long n, a, b, ans;
  cin >> n >> a >> b;

  ans = n / (a + b) * a + std::min(a, n % (a + b));

  cout << ans << "\n";

  return 0;
}
