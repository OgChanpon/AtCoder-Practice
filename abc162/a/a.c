#include <stdio.h>

int luck(char *n) {
  for (int i = 0; i < 3; i++) {
    if (n[i] == '7') {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  char n[4];
  scanf("%s", n);

  if (luck(n)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}
