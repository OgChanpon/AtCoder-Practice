#include <stdio.h>
#include <string.h>

int kaibun(char *s, int start, int end);

int main(void) {
  char s[100];
  scanf("%s", s);
  int judge = 0;
  int len = strlen(s);
  judge += kaibun(s, 0, len / 2 - 1);
  judge += kaibun(s, (len + 3) / 2 - 1, len - 1);
  judge += kaibun(s, 0, len - 1);

  if (judge == 3) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}

int kaibun(char *s, int start, int end) {
  while (start < end) {
    if (s[start] != s[end]) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}
