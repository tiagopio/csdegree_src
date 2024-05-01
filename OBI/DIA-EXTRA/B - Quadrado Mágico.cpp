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
  int mat[n][n];
  unordered_map<ll, int> ans, tmp;
  for (int i = 0; i < n; i++) {
    ll s = 0;
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
      tmp[mat[i][j]]++;
      s += mat[i][j];
    }
    ans[s]++;
  }
  int i = 0, j = 0;
  ll s = 0;
  while(i < n && j < n) {
    s+=mat[i][j];
    i++;
    j++;
  }
  ans[s]++;
  for (int i = 0; i < n; i++) {
    ll s = 0;
    for (int j = 0; j < n; j++) {
      s += mat[j][i];
    }
    ans[s]++;
  }
  if (ans.size() == 1 && tmp.size() == n * n) {
    for (auto i : ans) {
      cout << i.first << endl;
    }
  } else cout << 0 << endl;
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
