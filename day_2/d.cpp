#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

ll f(ll x) {
  return x & 1 ? x / 2 - x : x / 2;
}

int main() {
  ll q, l, r;
  cin >> q;
  while(q--) {
    cin >> l >> r;
    cout << (f(r) - f(l - 1)) << endl;
  }
}
