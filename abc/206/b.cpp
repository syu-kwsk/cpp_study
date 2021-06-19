#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void) {
  ll n;
  cin >> n;
  double x = (-1 + sqrt(1+8*n)) / 2;
  cout << ceil(x) << endl;

  return 0;
}
