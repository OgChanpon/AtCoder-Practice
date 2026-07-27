#include <stdio.h>

double vmax(double wa);

int main(void) {
  int l;
  scanf("%d", &l);
  printf("%lf\n", vmax(l));

  return 0;
}

double vmax(double wa) { return wa / 3.0 * wa / 3.0 * wa / 3.0; }
