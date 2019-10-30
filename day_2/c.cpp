#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

int main() {
  ll n, k, mr, mg, mb, needed;
  cin >> n >> k;
  mr = n * 2;
  mg = n * 5;
  mb = n * 8;
  needed = ((int) ceil(1.0 * mr / k)) + ((int) ceil(1.0 * mg / k)) + ((int) ceil(1.0 * mb / k));
  cout << needed << endl;
  return 0;
}
