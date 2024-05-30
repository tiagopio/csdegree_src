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
  ll n, x;
  cin >> n >> x;
  vector<int> a(n);

  for (int i = 0; i < n; i++) cin >> a[i];

  int i = 0, j = -1;
  ll ans = 0, s = 0;
  while(i < n) {
    while (j+1 < n && s+a[j+1] <= x) {
      s += a[++j];
    }
    ans += j - i + 1;
    s-=a[i];
    i++;
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

