#include <stdio.h>

int vote(int n, int m, int *a) {
  int total = 0;
  int check = 0;
  for (int i = 0; i < n; i++) {
    total += a[i];
  }
  for (int j = 0; j < n; j++) {
    if (a[j] * 4 * m >= total) {
      check++;
    }
    if (check == m) {
      return 1;
    }
  }

  return 0;
}

int main(void) {
  int n, m;
  int a[101];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  if (vote(n, m, a)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}
