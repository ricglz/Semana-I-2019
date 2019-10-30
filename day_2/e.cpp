#include <iostream>

using namespace std;

bool isVowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  string s, t;
  int n, i;
  cin >> s >> t;
  n = s.length();
  if(n != t.length()) {
    cout << "No" << endl;
    return 0;
  }
  for(i = 0; i < n; i++) {
    if(isVowel(s[i]) != isVowel(t[i])) {
      break;
    }
  }
  if(i == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
