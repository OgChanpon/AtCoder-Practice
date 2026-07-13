#include <iostream>

using namespace std;

int main() {
  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  int c[3][3] = {0};
  int flag = 0;
  int n;
  cin >> n;
  int b;

  for (int i = 0; i < n; i++) {
    cin >> b;
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (a[j][k] == b) {
          c[j][k] = 1;
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    if (c[i][0] && c[i][1] && c[i][2])
      flag = 1;
    if (c[0][i] && c[1][i] && c[2][i])
      flag = 1;
  }
  if (c[0][0] && c[1][1] && c[2][2])
    flag = 1;
  if (c[0][2] && c[1][1] && c[2][0])
    flag = 1;

  flag ? printf("Yes\n") : printf("No\n");

  return 0;
}
