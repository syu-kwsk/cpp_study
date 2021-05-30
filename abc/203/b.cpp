#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      ans += i*100 + j;
    }
  }
  cout << ans << endl;
  return 0;
}
