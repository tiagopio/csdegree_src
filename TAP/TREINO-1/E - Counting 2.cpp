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
  vector<ll> a(n);
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a));
  for (int i = 0; i < x; i++) {
    int e;
    cin >> e;
    auto p = a.end() - upper_bound(all(a), e - 1);
    cout << p << endl;
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
