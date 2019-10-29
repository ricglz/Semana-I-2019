#include <algorithm>
#include <iostream>
#include <vector>

typedef long long ll;

typedef struct Node {
  ll dif, start, end;
} Diff;

using namespace std;

bool comparator(Diff a, Diff b) {
  return a.dif < b.dif;
}

int main() {
  ll n, m, k, ans, count = 1;
  cin >> n >> m >> k;
  vector<ll> v(n);
  vector<Diff> d(n - 1);
  for(ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  if(k == n) {
    cout << n << endl;
    return 0;
  }
  for(ll i = 0; i < n - 1; i++) {
    d[i].dif = v[i + 1] - v[i];
    d[i].start = v[i];
    d[i].end = v[i + 1];
  }
  sort(d.begin(), d.end(), comparator);
  ll dif = n - k;
  ans = d[0].dif;
  for(ll i = 1; i < dif; i++) {
    ans += d[i].dif;
    if(d[i].start != d[i].end) {
      count++;
      ans++;
    }
  }
  cout << (ans + (k - count) + 1) << endl;
  return 0;
}
