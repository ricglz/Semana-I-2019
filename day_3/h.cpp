#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

ll findPile(ll v[], ll q, ll l, ll r) {
  ll mid = (l + r) / 2;
  if(mid == 0) {
    return 1;
  }
  while(q > v[mid] || q <= v[mid - 1]) {
    if(q > v[mid]) {
      l = mid + 1;
    } else if(q <= v[mid - 1]) {
      r = mid;
    }
    mid = (l + r) / 2;
    if(mid == 0) {
      return 1;
    }
  }
  return mid + 1;
}

int main() {
  ll n, i, m, q;
  cin >> n;
  ll v[n];
  cin >> v[0];
  for(i = 1; i < n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  cin >> m;
  for(i = 0; i < m; i++) {
    cin >> q;
    cout << findPile(v, q, 0, n - 1) << endl;
  }
  return 0;
}
