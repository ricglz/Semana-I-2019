#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isBiggerThan(string a, string b) {
  int aSize = a.length(), bLength = b.length();
  if(aSize != bLength) return aSize > bLength;
  for(int i = 0; i < aSize; i++) {
    if(a[i] < b[i]) {
      return false;
    }
  }
  return a[aSize - 1] > b[aSize - 1];
}

int main() {
  int q, n;
  string s, t, b;
  cin >> q;
  while(q--) {
    vector<string> v;
    cin >> n >> s;
    t = "";
    t += s[0];
    v.push_back(t);
    b = t;
    t = "";
    for(int i = 1; i < s.length(); i++) {
      t += s[i];
      if(isBiggerThan(t, b)) {
        v.push_back(t);
        b = t;
        t = "";
      }
    }
    if(t != "") {
      v[v.size() - 1] += t;
    }
    if(v.size() > 1) {
      cout << "YES" << endl;
      cout << v.size() << endl;
      cout << v[0];
      for(int i = 1; i < v.size(); i++) {
        cout << " " << v[i];
      }
      cout << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
