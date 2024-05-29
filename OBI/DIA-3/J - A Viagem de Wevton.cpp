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

int n, k;
vector<vector<int>> grid;
vector<bool> used;

int dfs(int a, int d) {
  if (count(all(used), true) == n) return d + grid[a][0] == k;
  int c = 0;
  for (int i = 0; i < n; i++) {
    if (!used[i] && grid[a][i]) {
      used[i] = true;
      c += dfs(i, d + grid[a][i]);
      used[i] = false;
    }
  }
  return c;
}

void solve() {
  cin >> n >> k;

  grid.resize(n, vector<int> (n));
  used.resize(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  used[0] = true;
  cout << dfs(0, 0) << endl;
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
