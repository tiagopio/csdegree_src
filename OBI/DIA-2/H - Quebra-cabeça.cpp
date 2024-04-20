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

int n;
vector<pair<char, int>> ans(200005);

void print(int x) {
  if (x == 1) {cout << endl; return;}
  else {
    cout << ans[x].first;
    print(ans[x].second);
  }
}

void solve() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    int e, d;
    char c;
    cin >> e >> c >> d;
    ans[e] = make_pair(c, d);
  }
  print(0);
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
