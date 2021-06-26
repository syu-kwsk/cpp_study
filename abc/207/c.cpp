#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Space {
public:
  double l;
  double r;
  Space() {
    l = r = 0;
  }
  Space(int t, double left, double right) {
    switch (t) {
      case 1:
        l = left;
        r = right;
        break;
      case 2:
        l = left;
        r = right - 0.1;
        break;
      case 3:
        l = left + 0.1;
        r = right;
        break;
      case 4:
        l = left + 0.1;
        r = right - 0.1;
        break;
    }
  }
};

int main(void) {
  ll n;
  cin >> n;
  Space v[n];
  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    int t;
    double l, r;
    cin >> t >> l >> r;
    v[i] = Space(t, l, r);
  }
  for (ll i = 0; i < n; i++) {
    for (ll j = i+1; j < n; j++) {
      if (!(v[i].r < v[j].l || v[j].r < v[i].l)) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}

