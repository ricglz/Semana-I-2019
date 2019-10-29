#include <iostream>

using namespace std;

int main() {
  int b, k, a, aOdds = 0;
  cin >> b >> k;
  for(int i = 0; i < k; i++) {
    cin >> a;
    if(a & 1) {
      aOdds++;
    }
  }
  if(b & 1) {
    if(aOdds & 1) {
      cout << "odd" << endl;
    } else {
      cout << "even" << endl;
    }
  } else {
    if(a & 1) {
      cout << "odd" << endl;
    } else {
      cout << "even" << endl;
    }
  }
}
