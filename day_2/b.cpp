#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int x, y, z, a, b, c, minDif;
  cin >> x >> y >> z >> a >> b >> c;
  a -= x;
  if(a < 0) {
    cout << "NO" << endl;
    return 0;
  }
  minDif = min(y, a);
  y -= minDif;
  a -= minDif;
  minDif = min(y, b);
  y -= minDif;
  b -= minDif;
  if(y) {
    cout << "NO" << endl;
    return 0;
  }
  minDif = min(z, a);
  z -= minDif;
  a -= minDif;
  minDif = min(z, b);
  z -= minDif;
  b -= minDif;
  minDif = min(z, c);
  z -= minDif;
  c -= minDif;
  if(z) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
