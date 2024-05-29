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

int n;
ll total = 0, sum = 0;
ll ans = 1e16;
vector<int> a;

void div(int i) {
  if (i == n) {
	  ans = min(ans, abs(sum - (total - sum)));
	  return;
  }
  sum += a[i];
  div(i + 1);
  sum -= a[i];
  div(i + 1);
}

void solve() {
  cin >> n;
  a.resize(n);

  for (int i = 0; i < n; i++) cin >> a[i], total += a[i];
  div(0);
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
