#include <stdio.h>

long long repi(long long n, long long k) {
  long long ans;
  long long mod = n % k;
  if (mod <= k - mod) {
    ans = mod;
  } else {
    ans = k - mod;
  }
  return ans;
}

int main(void) {
  long long n, k;
  scanf("%lld %lld", &n, &k);
  printf("%lld\n", repi(n, k));

  return 0;
}
