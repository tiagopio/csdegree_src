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

vector<pair<int, int>> ans;

void hanoi(int n, int init, int aux, int dst) {
  if (n == 1) {
    ans.push_back({init, dst});
    return;
  }
  hanoi(n - 1, init, dst, aux);
  hanoi(1, init, aux, dst);
  hanoi(n - 1, aux, init, dst);
}

void solve() {
  int x; cin >> x;
  hanoi(x, 1, 2, 3);
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i].first << " " << ans[i].second << endl;
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
