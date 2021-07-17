#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ll max = 1000000000 + 7;
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  ll ans = 1;
  for (ll i = 0; i < n; i++) {
    ans *= v[i] - i;
    ans = ans > max ? ans % max : ans;
  }
  cout << ans << endl;

  return 0;

}
