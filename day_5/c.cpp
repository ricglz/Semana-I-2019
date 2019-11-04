#include <algorithm>
#include <iostream>

#define SIZE 100100
#define MAX 500

using namespace std;

int main() {
  bool primes[SIZE];
  int n, m, a, rows[MAX] = {0}, cols[MAX] = {0}, prime,
      minRow, minCol;
  primes[0] = false;
  primes[1] = false;
  fill(primes + 2, primes + SIZE, true);
  for(int i = 4; i <= SIZE; i+=2) {
    primes[i] = false;
  }
  for(int i = 3; i < SIZE; i+=2) {
    if(primes[i]) {
      for(int j = i * 2; j <= SIZE; j += i) primes[j] = false;
    }
  }
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a;
      prime = a;
      while(!primes[prime]) {
        prime++;
      }
      rows[i] += prime - a;
      cols[j] += prime - a;
    }
  }
  minRow = *min_element(rows, rows + n);
  minCol = *min_element(cols, cols + n);
  cout << min(minRow, minCol) << endl;
  return 0;
}
