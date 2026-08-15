#include <stdio.h>

int coin(int n) { return 1000 * (n / 500) + 5 * ((n % 500) / 5); }

int main(void) {
  int x;
  scanf("%d", &x);

  printf("%d\n", coin(x));

  return 0;
}
