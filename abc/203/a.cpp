#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  if (a != b && b != c && c != a) {
    cout << 0 << endl;
  } else {
    if (a == b) cout << c << endl;
    else if (b == c) cout << a << endl;
    else cout << b << endl;
  }
  return 0;
}
