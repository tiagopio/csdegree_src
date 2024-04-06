#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
typedef long double ld;
const int N = 2e5+10;
const int mod = 1e9+7;
const ll inf = 1e9+10;

void solve() {
  int p, d1, d2;
  cin >> p >> d1 >> d2;
  int s = d1 + d2;
  
  if (p == 1) {
    if (s % 2) {
      cout << 0 << endl;
    } else cout << 1 << endl;
  } else {
    if (s % 2) {
      cout << 1 << endl;
    } else cout << 0 << endl;
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
