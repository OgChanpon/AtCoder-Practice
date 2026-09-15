#include <stdio.h>

long long fizbuz(long long n) {
  long long total = 0;
  for (long long i = 0; i <= n; i++) {
    if (i % 3 != 0 && i % 5 != 0) {
      total += i;
    }
  }
  return total;
}

int main(void) {
  long long n;
  scanf("%lld", &n);
  printf("%lld\n", fizbuz(n));
  return 0;
}
