#include <iostream>

typedef unsigned long long ll;

using namespace std;

int main() {
  ll t, x, y;
  cin >> t;
  while(t--) {
    cin >> x >> y;
    if(x - y == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
