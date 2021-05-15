#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;
  int ans = 0;

  for (int i = 0; i < 10000; i++) {
    bool appeared[10] = { false };
    int pass = i;

    for (int j = 0; j < 4; j++) {
      appeared[pass % 10] = true;
      pass /= 10;
    }

    bool is_proper = true;

    for (int j = 0; j < 10; j++) {
      if (s[j] == 'o' && !appeared[j]) {
        is_proper = false;
      }
      if (s[j] == 'x' && appeared[j]) {
        is_proper = false;
      }
    }

    if (is_proper) ans += 1;
  }
  cout << ans << endl;
}

