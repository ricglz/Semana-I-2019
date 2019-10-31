#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
  ll n, k, s, i, l = 1, r;
  cin >> n >> k;
  r = n;
  i = (r + l) / 2;
  while(s = i * (i + 1) / 2, s != k + (n - i)) {
    if(s < k + (n - i)) {
      l = i + 1;
    } else {
      r = i;
    }
    i = (r + l) / 2;
  }
  cout << (s - k) << endl;
  return 0;
}
