#include <iostream>
#include <string>

using namespace std;

int kaibun(string s, int start, int end) {
  while (start < end) {
    if (s[start] != s[end]) {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int main(void) {
  string s;
  cin >> s;
  int judge = 0;
  int sl = s.length();

  judge += kaibun(s, 0, (sl - 1) / 2 - 1);
  judge += kaibun(s, (sl + 3) / 2 - 1, sl - 1);
  judge += kaibun(s, 0, sl - 1);

  if (judge == 3) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }
  return 0;
}
