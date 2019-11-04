#include <iostream>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;

bool exists(vector<ll> v, map<ll, bool> m, ll n) {
  ll size = v.size();
  for(ll i = 0; i < size; i++) {
    if(m[n - v[i]]) {
      return true;
    }
  }
  return false;
}

int main() {
  ll n, a = 1;
  cin >> n;
  vector<ll> v;
  map<ll, bool> m;
  v.push_back(a);
  m[a] = true;
  for(ll i = 2; a < n; i++) {
    a = i * (i + 1) / 2;
    v.push_back(a);
    m[a] = true;
  }
  if(exists(v, m, n)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
