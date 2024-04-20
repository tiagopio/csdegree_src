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
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(all(a));
  
  for (int i = 0; i < n; i++) {
    int l = 0, r = n;
    while (l < r) {
      int m = (l + r) / 2;
      if (a[i].first + a[m].first == x && i != m) {
        cout << a[m].second << " " << a[i].second << endl;
        return;
      }
      if (a[i].first + a[m].first < x) l = m + 1;
      else r = m - 1;
    }
  }
  cout << "IMPOSSIBLE\n";
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
