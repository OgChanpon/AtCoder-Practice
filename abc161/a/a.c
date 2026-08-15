#include <stdio.h>

int swap(int x, int y, int z);

int main(void) {
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  swap(x, y, z);
  return 0;
}

int swap(int x, int y, int z) {
  printf("%d %d %d\n", z, x, y);
  return 0;
}
