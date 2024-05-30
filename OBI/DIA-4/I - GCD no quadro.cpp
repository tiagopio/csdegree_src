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
  int n; 
  cin >> n;
  vector<ll> prefixes, suffixes, a;

  a.resize(n);
  prefixes.resize(n + 2);
  suffixes.resize(n + 2);
	
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  prefixes[0] = a[0];
  suffixes[n-1] = a[n-1];

  for (int i = 1; i < n; i++) {
    prefixes[i] = gcd(prefixes[i - 1], a[i]);
  }

  for (int i = n-2; i >= 0; i--) {
    suffixes[i] = gcd(suffixes[i + 1], a[i]);
  }

  ll ret = max(prefixes[n - 2], suffixes[1]);
  for (int i = 0; i < n - 2; i++) {
    ret = max(ret, gcd(prefixes[i], suffixes[i + 2]));
  }

  cout << ret << endl;
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
