#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, p = 0, a, z = 0, k;
  cin >> n;
  k = (int) ceil(1.0 * n / 2.0);
  for(int i = 0; i < n; i++) {
    cin >> a;
    if(a > 0) {
      p++;
    } else if(a == 0) {
      z++;
    }
  }
  if(p >= k) {
    cout << 1 << endl;
  } else if (n - p - z >= k) {
    cout << -1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
