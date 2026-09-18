#include <stdio.h>

int homework(int n, int m, int a[]) {
  int res = 0;
  for (int i = 0; i < m; i++) {
    res += a[i];
  }
  if (res <= n) {
    return n - res;
  } else {
    return -1;
  }
}

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[10001];
  for (int i = 0; i < m; i++) {
    scanf("%d", &a[i]);
  }
  printf("%d\n", homework(n, m, a));

  return 0;
}
