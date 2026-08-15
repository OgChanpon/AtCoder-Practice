#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;

  cin >> s;

  cout << string(s.length(), 'x') << endl;

  return 0;
}
