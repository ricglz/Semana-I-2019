#include <iostream>

typedef long long ll;

using namespace std;

void blackMoves(ll n, ll x, ll y, ll& b) {
  ll difX = n - x, difY = n - y;
  if(difX < difY) {
    difY -= difX;
  } else {
    difX -= difY;
  }
  b = difX + difY;
}

void whiteMoves(ll x, ll y, ll& w) {
  ll difX = x - 1, difY = y - 1;
  if(difX < difY) {
    difY -= difX;
  } else {
    difX -= difY;
  }
  w = difX + difY;
}

int main() {
  ll n, x, y, b = 0, w = 0;
  cin >> n >> x >> y;
  blackMoves(n, x, y, b);
  whiteMoves(x, y, w);
  if(b < w) {
    cout << "Black" << endl;
  } else {
    cout << "White" << endl;
  }
  return 0;
}
