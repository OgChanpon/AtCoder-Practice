#include <stdio.h>

int sheepwolf(int s, int w) { return s <= w; }

int main(void) {
  int s, w;
  scanf("%d %d", &s, &w);
  if (sheepwolf(s, w)) {
    printf("unsafe\n");
  } else {
    printf("safe\n");
  }
  return 0;
}
