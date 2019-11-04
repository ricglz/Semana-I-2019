#include <iostream>

using namespace std;

int main() {
  int q, n, i;
  string s, t;
  cin >> q;
  while(q--) {
    cin >> s >> t;
    bool arr[26] = {0}, arr2[26] = {0}, flag = false;
    n = s.length();
    if(n != t.length()) {
      cout << "NO" << endl;
      return 0;
    }
    for(i = 0; i < n; i++) {
      arr[s[i] - 'a'] = true;
      arr2[t[i] - 'a'] = true;
    }
    for(i = 0; i < 26 && !flag; i++) {
      if(arr[i] == arr2[i] && arr[i] == true) {
        flag = true;
      }
    }
    if(flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
