#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  int n;
  cin >> n;
  string c;
  map<string, int> s;
  for(int i = 0; i < n; i++){
    cin >> c;
    s[c]++;
  }
  int max_cnt = 1;

  for(auto p : s){
    if(p.second > max_cnt){
      max_cnt = p.second;
    }
  }

  for(auto p : s){
    if(max_cnt == p.second){
      cout << p.first << endl;
    }
  }

  return 0;
}
