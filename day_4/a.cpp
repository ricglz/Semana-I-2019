#include <iostream>

typedef long long ll;

using namespace std;

int main() {
  ll n, count = 0, possible[] = {1, 5, 10, 20, 100}, i = 4, l;
  cin >> n;
  for(; n > 0 && i >= 0; i--) {
    if(n >= possible[i]) {
      l = n / possible[i];
      count += l;
      n -= possible[i] * l;
    }
  }
  cout << count << endl;
  return 0;
}
