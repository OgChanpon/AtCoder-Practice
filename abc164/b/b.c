#include <stdio.h>

char *battle(int a, int b, int c, int d) {
  while (1) {
    c -= b;
    if (c <= 0) {
      return "Yes";
    }
    a -= d;
    if (a <= 0) {
      return "No";
    }
  }
}

int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  printf("%s\n", battle(a, b, c, d));

  return 0;
}
