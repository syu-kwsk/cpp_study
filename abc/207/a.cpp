#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
  vector<int> n(3);
  cin >> n[0] >> n[1] >> n[2];
  sort(n.begin(), n.end());
  cout << n[2] + n[1] << endl;
  
  return 0;
}

