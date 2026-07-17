#include <stdio.h>

int main(void) {
  long long n, a, b, ans;
  scanf("%lld %lld %lld", &n, &a, &b);

  ans = n / (a + b) * a;
  if (n % (a + b) > a) {
    ans += a;
  } else {
    ans += n % (a + b);
  }

  printf("%lld\n", ans);
  return 0;
}
