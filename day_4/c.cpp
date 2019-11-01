#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main() {
  ll n, z = 0, s = 0;
  bool isNegative = false;
  cin >> n;
  vector<ll> v(n);
  for(ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(ll i = 0; i < n; i++) {
    if(v[i] == 0) {
      z++;
    } else {
      if(v[i] < 0) {
        isNegative = !isNegative;
      }
      s += abs(v[i]) - 1;
    }
  }
  if(isNegative && !z) {
    s += 2;
  } else {
    s += z;
  }
  cout << s << endl;
  return 0;
}
