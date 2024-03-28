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
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll e; cin >> e;
    int sum = 0;
    while(e) {
      int d = e % 10;
      if (d == 4 || d == 7) sum++;
      e /= 10;
    }
    if (sum <= k) ans++;
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
