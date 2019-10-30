#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main() {
  ll n, l = 0, r = 1, ans = 0;
  cin >> n;
  vector<ll> v(n);
  for(ll i = 0; i < n; i++) {
    cin >> v[i];
    v[i] = abs(v[i]);
  }
  sort(v.begin(), v.end());
  while(l < n) {
    while(r < n && v[l] * 2 >= v[r]) {
      r++;
    }
    ans += r - l - 1;
    l++;
  }
  cout << ans << endl;
  return 0;
}
