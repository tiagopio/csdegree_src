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
  int n, m;
  cin >> n >> m;
  priority_queue<pair<int, char>> num;

  for (int i = 0; i < n; i++) {
    int e; cin >> e;
    num.push({e, 'A'});
  }

  for (int i = 0; i < m; i++) {
    int e; cin >> e;
    num.push({e, 'B'});
  }
  ll ans = INT_MAX;
  while(!num.empty()) {
    pair<int, char> e = num.top();
    num.pop();
    if (e.second != num.top().second) {
      ll diff = abs(e.first - num.top().first);
      ans = min(ans, diff);
    }
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
