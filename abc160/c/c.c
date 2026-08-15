#include <stdio.h>

int travel(int k, int n, int *a) {
  int m = 0;
  int b;
  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      b = a[i + 1] - a[i];
    } else {
      b = k - a[i] + a[0];
    }
    if (m < b) {
      m = b;
    }
  }
  return k - m;
}

int main(void) {
  int k, n;
  scanf("%d %d", &k, &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("%d\n", travel(k, n, a));

  return 0;
}
