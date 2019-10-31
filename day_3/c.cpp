#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, prevCount, count = 1, i = 1, ans = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  while(v[i] == v[i - 1]) {
    i++;
  }
  prevCount = i;
  while(i < n) {
    i++;
    while(i < n && v[i] == v[i - 1]) {
      i++;
      count++;
    }
    ans = max(ans, min(prevCount, count));
    prevCount = count;
    count = 1;
  }
  cout << ans * 2 << endl;
  return 0;
}
