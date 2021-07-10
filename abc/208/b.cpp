#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long fact(int i) {
  if (i == 1) {
    return 1;
  }
  return i * fact(i-1);
}

int main(void) {
  ll p;
  cin >> p;
  int ans = 0;
  int i = 10;
  long long fac = fact(i);
  while (i > 0) {
    if (p > 0) {
      p -= fac;
      ans++;
    }
    if (p == 0) break;
    if (p < 0) {
      p += fac;
      ans--;
      i--;
      fac = fact(i);
    }
  }
  cout << ans << endl;
  return 0;
}
