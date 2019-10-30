#include <functional>
#include <iostream>
#include <vector>
#include <queue>

typedef long long ll;

using namespace std;

void haveFun(priority_queue <ll, vector<ll>, greater<ll> > &q, ll &sum, ll k) {
  while(q.size() > k) {
    q.pop();
  }
  while(!q.empty()) {
    sum += q.top();
    q.pop();
  }
}

int main() {
  ll n, k, sum = 0;
  char prevChar = '\0';
  priority_queue <ll, vector<ll>, greater<ll> > q;
  string s;
  cin >> n >> k;
  vector<ll> v(n);
  for(ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  cin >> s;
  for(ll i = 0; i < n; i++) {
    if(prevChar != s[i]) {
      prevChar = s[i];
      haveFun(q, sum, k);
    }
    q.push(v[i]);
  }
  haveFun(q, sum, k);
  cout << sum << endl;
  return 0;
}
