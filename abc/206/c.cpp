#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void) {
  ll n;
  cin >> n;
  ll ans = n * (n - 1) / 2;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  ll tmp = v[0];
  ll count = 1;
  for (int i = 1; i < n; i++) {
    if (v[i] != tmp) {
      ans -= count * (count - 1) / 2;
      tmp = v[i];
      count = 1;
    } else {
      count ++;
    }
  }
  ans -= count * (count - 1) / 2;
  cout << ans << endl;

  return 0;
}
