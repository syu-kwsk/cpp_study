#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  if (n <= a) {
    cout << n*x << endl;
  } else {
    cout << a*x + y*(n - a) << endl; 
  }
  return 0;
}
