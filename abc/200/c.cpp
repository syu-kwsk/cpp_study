#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  long long ans = 0;
  vector<long long> a(200);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a[ai % 200]++;
  }

  for (int i = 0; i < 200; i++) {
    ans += a[i] * (a[i] - 1) / 2;
  }
  cout << ans << endl;
}

