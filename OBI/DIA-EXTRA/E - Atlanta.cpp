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

vector<int> ans;

void divs(int e, vector<int> &v) {
  for (int i = 3; i < e; i++) {
    if (e % i == 0) v.push_back(i);
  }
}

void solve() {
  int x, y;
  cin >> x >> y;
  divs(x + y, ans);

  for (auto i : ans) {
    for (auto j : ans) {
      if (((i - 2) * 2) + (j * 2) == x && (i - 2) * (j - 2) == y) {
        cout << min(i, j) << " " << max(i, j) << endl;
        return;
      }
    }
    
  }
  cout << -1 << " " << -1 << endl;
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
