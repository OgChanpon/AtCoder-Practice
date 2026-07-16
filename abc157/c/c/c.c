#include <stdio.h>
#include <string.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int rules[5][2] = {0};
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &rules[i][j]);
    }
  }
  char str[4];
  int flag = 1;

  for (int i = 0; i < 1000; i++) {
    sprintf(str, "%d", i);
    if (strlen(str) == n) {
      for (int j = 0; j < m; j++) {
        if ((str[rules[j][0] - 1] - '0') != rules[j][1]) {
          flag = 0;
          break;
        } else {
          flag = 1;
        }
      }
      if (flag) {
        printf("%d\n", i);
        return 0;
      }
    }
  }
  printf("%d\n", -1);

  return 0;
}
