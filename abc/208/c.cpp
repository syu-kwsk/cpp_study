#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll>> p(n);
  vector<ll> r(n);

  ll init = 0;
  if (k >= n) {
    init = k / n;
    k -= init * n;
  }

  for (ll i = 0; i < n; i++) {
    ll an;
    cin >> an
    p[i].first = an;
    p[i].second = init;
    r[i] = an;
  }

  sort(r.begin(), r.end());

  ll th = r[k-1];
  for (ll i = 0; i < n; i++) {
    if (p[i].first <= th && k > 0) {
      p[i].second++;
    }
    cout << p[i].second << endl;
  }
  return 0;
}
