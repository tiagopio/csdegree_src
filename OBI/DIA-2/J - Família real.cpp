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

vector<vector<int>> gen(10005), ans(10005);
map<int, int> present;

void dfs(int x, int level) {
  ans[level].push_back(x);
  for (int i = 0; i < gen[x].size(); i++) {
    dfs(gen[x][i], level + 1);
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    gen[x].push_back(i + 1);
  }
  
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    present[x]++;
  }

  dfs(0, 0);

  for (int i = 1; i < 10005; i++) {
    if (ans[i].size()) {
      double ok = 0;
      for (auto x : ans[i]) {
        if (present.count(x)) ok++;
      }
      cout << ok / ans[i].size() * 100 << " "; 
    }
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout << fixed << setprecision(2);
  int t = 1;
  // cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
