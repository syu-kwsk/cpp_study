#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  string s1, s2;
  int t1 = -1;
  int t2 = -2;
  for (int i = 0; i < n; i++) {
    string s;
    int t;
    cin >> s >> t;
    if (t1 < t) {
      t2 = t1; s2 = s1;
      t1 = t;  s1 = s;
    } else if (t2 < t) {
      t2 = t; s2 = s;
    }
  }
  cout << s2 << endl;
}

