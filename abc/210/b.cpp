#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  ll n;
  string s;
  cin >> n >> s;
  for (int i = 1; i <= n; i++) {
    if (s[i-1] == '1') {
      cout << (i % 2 ? "Takahashi" : "Aoki") << endl;
      break;
    }
  }
  return 0;
}
