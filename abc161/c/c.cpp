#include <iostream>

using namespace std;

long long repi(long long n, long long k) {
  long long mod = n % k;
  long long ans = min(mod, k - mod);

  return ans;
}

int main(void) {
  long long n, k;
  cin >> n >> k;
  cout << repi(n, k) << "\n";

  return 0;
}
