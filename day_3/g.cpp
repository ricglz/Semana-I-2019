#include <iostream>

using namespace std;

int main() {
  int n, ans = 0, temp, count = 0, length;
  cin >> n;
  string s;
  while(count != n) {
    cin >> s;
    if(count != 0) {
      count++;
    }
    length = s.length();
    temp = 0;
    for(int i = 0; i < length; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
        temp++;
      }
    }
    if(temp > ans) {
      ans = temp;
    }
    count += length;
  }
  cout << ans << endl;
  return 0;
}
