#include <stdio.h>

int coffee(char *n) {
  if (*(n + 2) == *(n + 3) && *(n + 4) == *(n + 5)) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  char s[10];
  scanf("%s", s);

  if (coffee(s)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}
