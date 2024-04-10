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
  int v = 0, p = 0;
  for (int i = 0; i < 6; i++) {
    char x; cin >> x;
    if (x == 'V') v++;
    else p++;
  }

  if (v >= 5) cout << 1 << endl;
  else if (v >= 3 && v <= 4) cout << 2 << endl;
  else if (v >= 1 && v <= 2) cout << 3 << endl;
  else cout << -1 << endl; 
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
