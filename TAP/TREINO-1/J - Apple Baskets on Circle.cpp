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

ll n, k;
ll a[N], ans[N];

bool ok(ll guess) {
  ll eat = 0;
  for (int i = 0; i < n; i++) {
    eat += min(a[i], guess);
    if (eat > k) return false;
  }
  return true;
}

void solve() {
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> a[i];  
  }

  ll l = 0, r = 1e12+5;
  while(l + 1 < r) {
    ll m = (l + r) / 2;
    
    if (!ok(m)) r = m;
    else l = m;
  }

  ll check = 0;
  for (int i = 0; i < n; i++) {
    check += min(a[i], l);
    a[i] -= min(a[i], l);
  }
  if (check == k) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
  } else {
    for (int i = 0; i < n; i++) {
      if (check == k) break;
      if (a[i]) {
        a[i]--;
        check++;
      }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
  }
  cout << endl;
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
