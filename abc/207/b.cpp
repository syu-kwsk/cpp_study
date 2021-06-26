#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if (d*c - b <= 0) {
    cout << -1 << endl;
  } else {
    cout << ceil(a / (d*c -b)) << endl; 
  }

  return 0;
}

