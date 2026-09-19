#include <stdio.h>

void manage(int n, int a[], int res[]) {
  for (int i = 0; i < n - 1; i++) {
    res[a[i]] += 1;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  int a[200001];
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &a[i]);
  }
  int res[200001] = {0};
  manage(n, a, res);
  for (int i = 1; i < n + 1; i++) {
    printf("%d\n", res[i]);
  }
  return 0;
}
