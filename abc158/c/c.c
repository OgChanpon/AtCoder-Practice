#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  for (int i = 0; i < 1001; i++) {
    int aa = i * 8 / 100;
    int bb = i * 10 / 100;
    if (aa == a && bb == b) {
      printf("%d\n", i);
      return 0;
    }
  }

  printf("-1\n");
  return 0;
}
