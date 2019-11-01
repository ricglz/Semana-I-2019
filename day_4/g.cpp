#include <algorithm>
#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

typedef struct Jump {
  int curPos, accum;
} Jump;

ll getAccum(vector<Jump> v, Jump j, int d) {
  int i = v.size() - 1, bestAcum = 10000;
  while(i >= 0 && j.curPos - v[i].curPos <= d) {
    if(v[i].accum >= 0) {
      bestAcum = min(bestAcum, v[i].accum + 1);
    }
    i--;
  }
  return bestAcum == 10000 ? -1 : bestAcum;
}

int main() {
  int n, d, i = 1;
  vector<Jump> v;
  Jump j = {0, 0};
  string s;
  cin >> n >> d >> s;
  v.push_back(j);
  for(; i < n; i++) {
    if(s[i] == '1') {
      j.curPos = i;
      j.accum = getAccum(v, j, d);
      v.push_back(j);
    }
  }
  cout << v.back().accum << endl;
  return 0;
}
