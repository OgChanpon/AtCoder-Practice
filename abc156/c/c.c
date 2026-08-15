#include <stdio.h>

int main() {
  int n, x[105];
  int min = 100000000, tmp = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < n; j++) {
      tmp += (x[j] - i) * (x[j] - i);
    }
    if (tmp < min) {
      min = tmp;
    }
    tmp = 0;
  }

  printf("%d\n", min);

  return 0;
}
