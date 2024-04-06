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

vector<pair<int, int>> a(61);

void solve() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    vec[i] = x;
    char c; cin >> c;
    if (c == 'D') a[x].first++;
    else a[x].second++;
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    int par = min(a[vec[i]].first, a[vec[i]].second);
    ans += par;
    a[vec[i]].first -= par;
    a[vec[i]].second -= par;
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
