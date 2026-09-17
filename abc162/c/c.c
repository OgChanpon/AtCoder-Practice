#include <stdio.h>

int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }

int main(void) {
  int n;
  scanf("%d", &n);

  int res = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        res += gcd(gcd(i, j), k);
      }
    }
  }
  printf("%d\n", res);

  return 0;
}
