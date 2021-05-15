#include <bits/stdc++.h>
using namespace std;

int main(void) {
  double a, b, c;
  cin >> a >> b >> c;
  double x = (a + b + c) / 3.0;
  if (x == a || x == b || x == c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

