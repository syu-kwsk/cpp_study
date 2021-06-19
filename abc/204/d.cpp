#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  int n;
  cin >> n;
  int half = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    half += v[i];
  }
  half = ceil(half/2);
  sort(v.begin(), v.end(), greater<int>{});
  int ans = v[0];
  for (int i = 1; i < n; i++) {
    int tmp = ans + v[i] - v[i-1];
    if (half <= tmp) {
      if (tmp <= ans) {
        ans = tmp;
      }
      ans = tmp;
    } else {
      if (tmp < )
      tmp = ans;
    }
    cout << ans << endl;
  }
  cout << ans << endl;
  return 0;
}
