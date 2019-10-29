#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  int n, k, a;
  set<int> students;
  vector<int> ids;
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
    cin >> a;
    if(students.size() < k) {
      students.insert(a);
      if(students.size() != ids.size()) {
        ids.push_back(i);
      }
    }
  }
  if(students.size() == k) {
    cout << "YES" << endl;
    cout << ids[0];
    for(int i = 1; i < k; i++) {
      cout << " " << ids[i];
    }
    cout << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
