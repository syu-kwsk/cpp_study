#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main(void) {
  long long n, k;
  cin >> n >> k;
  vector<pair<long long, long long>> f(n);
  ll ans = k;
  for (int i = 0; i < n; i++) {
    long long nf, kf;
    cin >> nf >> kf;
    f[i] = make_pair(nf, kf);
  }
  sort(f.begin(), f.end());

  for (int i = 0; i < n; i++) {
    if (f[i].first <= ans) ans += f[i].second;
  }
  cout << ans << endl;
  return 0;
}
