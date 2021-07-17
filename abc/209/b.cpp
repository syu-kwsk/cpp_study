#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ll n, x;
  cin >> n >> x;
  ll sum = 0;
  for (ll i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    if (i % 2) {
      sum += a;
    } else {
      sum += a - 1;
    }
  }
  cout << (sum <= x ? "Yes" : "No") << endl;

  return 0;

}
