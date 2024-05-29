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

vector<vector<int>> graph;

void solve() {
  int n, c;
  cin >> n >> c;
  graph.resize(n + 1);
  for (int i = 0; i < c; i++) {
    int p, x;
    cin >> p >> x;
    for (int j = 0; j < x; j++) {
      int e; cin >> e;
      graph[p].push_back(e);
      p = e;
    }
  }
  map<int, int> bad;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < graph[i].size(); j++) {
      bad[graph[i][j]]++;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (!bad.count(i)) {
      cout << i << endl;
    }
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
