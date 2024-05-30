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

int a[N];

void solve() {
  int n, d;
  cin >> n >> d;
  
  for (int i = 0; i < n; a[i + 1] = a[i], i++) cin >> a[i];
  
  int r = -1, s = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    while(r + 1 < i + n && s < d) {
      s += a[++r];
    }
    if (s == d) ans++;
    s -= a[i];
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
