#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  int n;
  int x, y;
  cin >> x >> y;
  if (x == y && x == 2) {
    cout << 2 << endl;
    return 0;
  }
  cout << (3 - x - y) % 3 << endl;
  return 0;
}
