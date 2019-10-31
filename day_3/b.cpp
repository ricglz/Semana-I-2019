#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, l = 0, bestWindow = 0, w, i;
  cin >> n;
  vector<int> v(n);
  for(i = 0; i < n; i++) {
    cin >> v[i];
  }
  i = 0;
  while(i < n) {
    i++;
    while(i < n && v[i] - v[i - 1] == 1) i++;
    w = i - l - 2;
    if(v[l] == 1 || v[i - 1] == 1000) w++;
    bestWindow = max(bestWindow, w);
    l = i;
  }
  cout << bestWindow << endl;
  return 0;
}
