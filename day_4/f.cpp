#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

int main() {
  ll n, v, s = 0, i = 2;
  cin >> n >> v;
  s = min(v, n - 1);
  while(v < n - i + 1) {
    s += i;
    i++;
  }
  cout << s << endl;
  return 0;
}
