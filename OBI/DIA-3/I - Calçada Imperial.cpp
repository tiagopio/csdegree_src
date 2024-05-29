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

int v[505];

void solve() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) cin >> v[i];

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      int a = v[i], b = v[j];

      int last = -1, lans = 0;
      for (int k = 1; k <= n; k++) {
        if (v[k] != a && v[k] != b || v[k] == last) continue;
        lans++;
        last = v[k];
      }
      ans = max(ans, lans);
    }
  }
  cout << ans << endl;
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
