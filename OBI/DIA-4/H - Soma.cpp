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

vector<ll> a, prefix;
map<ll, ll> mp;

void solve() {
  int n, x;
  cin >> n >> x;

  a.resize(n);
  prefix.resize(n + 1);

  prefix[0] = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    prefix[i + 1] = prefix[i] + a[i];
  }

  ll ans = 0;
  for (auto i : prefix) {
    ll comp = i - x;
    if (mp.count(comp)) ans += mp[comp];
    mp[i]++;
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

