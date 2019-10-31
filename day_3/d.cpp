#include <iostream>

using namespace std;

int main() {
  int n, l = 0, r = 1, count[26] = {0};
  string s;
  cin >> n >> s;
  count[s[0] - 'a']++;
  while(r < n && s[l] == s[r]) {
    l++;
    r++;
  }
  if(r == n) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << s.substr(l, 2) << endl;
  }
  return 0;
}
