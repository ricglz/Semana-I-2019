#include <iostream>

using namespace std;

typedef unsigned long long ll;

int main() {
  int n;
  cin >> n;
  ll ans[101] = {0};
  ans[0] = 1;
  for(ll i = 1; i <= n; i++) {
    ans[i] += ans[i - 1] + 4 * (i - 1);
  }
  cout << ans[n] << endl;
  return 0;
}
