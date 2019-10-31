#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, i;
  cin >> n;
  int v [n];
  for(i = 0; i < n; i++) {
    cin >> v[i];
  }
  if(n == 1 || n == 2) {
    cout << "YES" << endl;
    return 0;
  }
  i = 0;
  while(i < n && v[i] < v[i + 1]) {
    i++;
  }
  n--;

  while(i < n && v[i] == v[i + 1]) {
    i++;
  }

  while(i < n && v[i] > v[i + 1]) {
    i++;
  }

  cout << (i >= n ? "YES" : "NO") << endl;
  return 0;
}
