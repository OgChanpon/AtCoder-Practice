#include <stdio.h>

int main() {
  int n, k, base = 1;
  int cnt = 0;
  scanf("%d %d", &n, &k);

  while (n > 0) {
    cnt++;
    n /= k;
  }

  printf("%d\n", cnt);

  return 0;
}
