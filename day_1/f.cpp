#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k, s = 0, e, ans = 0;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  e = n - 1;
  while((v[s] <= k || v[e] <= k) && s <= e) {
    if(v[s] <= k) {
      s++;
      ans++;
    } else if(v[e] <= k) {
      e--;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
