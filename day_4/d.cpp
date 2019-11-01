#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main() {
  ll n, w = 1, maxW = 1;
  cin >> n;
  vector<ll> v(n);
  for(ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(ll i = 1; i < n; i++) {
    if(v[i - 1] < v[i]) {
      w++;
    } else {
      maxW = max(maxW, w);
      w = 1;
    }
  }
  cout << max(maxW, w) << endl;
  return 0;
}
