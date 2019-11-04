#include <iostream>

using namespace std;

bool valid(string l, string r) {
  int i = 0, n = l.length();
  if(n != r.length()) return n < r.length();
  for(; i < n; i++) {
    if(l[i] != r[i]) return l[i] < r[i];
  }
  return true;
}

int main() {
  string l, r;
  bool exists[10] = {false};
  int n, i, j;
  char c;
  cin >> l >> r;
  n = l.length();
  for(i = 0; i < n; i++) {
    c = l[i];
    while(c <= '9' && exists[c - '0']) c++;
    if(c > '9') {
      j = i - 1;
      while(j >= 0 && (l[j] == '9' || exists[l[j] + 1 - '0'])) j--;
      if(j < 0) break;
      l[j]++;
      j++;
      for(; j < n; j++) l[j] = '0';
      for(j = 0; j < 10; j++) exists[j] = false;
      i = 0;
    } else {
      exists[c - '0'] = true;
      if(l[i] != c) {
        l[i] = c;
        for(j = i + 1; j < n; j++) l[j] = '0';
      }
    }
  }
  if(i != n) {
    l = "10";
    n++;
    for(i = 2; i < n; i++) {
      c = '0' + i;
      l += c;
    }
  }
  if(valid(l, r)) {
    cout << l << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
