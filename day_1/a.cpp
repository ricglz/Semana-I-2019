#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n, t, s, d, ans, ansValue = 1000000;
  cin >> n >> t;
  for(int i = 0; i < n; i++) {
    cin >> s >> d;
    if(s < t) {
      s += (int) ceil(1.0 * (t - s) /d) * d;
    }
    if(s < ansValue) {
      ans = i + 1;
      ansValue = s;
    }
  }
  cout << ans << endl;
  return 0;
}
