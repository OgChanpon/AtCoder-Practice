#include <stdio.h>

double cp(int r) { return 2 * r * 3.14159265358979323846; }

int main(void) {
  int r;
  scanf("%d", &r);

  printf("%f\n", cp(r));

  return 0;
}
