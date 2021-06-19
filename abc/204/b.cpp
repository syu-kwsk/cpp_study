#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (tmp > 10) {
      ans += tmp - 10;
    }
  }
  cout << ans << endl;
  return 0;
}
