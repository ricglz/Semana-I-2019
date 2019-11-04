#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, r, i, prev = 0, prevCount, count = 0;
  cin >> n >> r;
  vector<int> v(n);
  for(i = 0; i < n; i++) {
    cin >> v[i];
  }
  while(prev < n) {
    i = min(n - 1, prev + r - 1);
    prevCount = count;
    while(i >= 0 && i >= (prev - r + 1)) {
      if(v[i]) {
        count++;
        break;
      }
      i--;
    }
    if(count == prevCount) {
      break;
    }
    prev = i + r;
  }
  if(prev >= n) {
    cout << count << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
