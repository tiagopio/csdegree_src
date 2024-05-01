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
  int n; cin >> n;
  int ans = INT_MIN;

  int qtd = 0;
  for (int i = 0; i < n; i++) {
    char c; cin >> c;
    if (c == '0') qtd++;
    else {
      ans = max(qtd, ans);
      qtd = 0;
    }
  }
  ans = max(qtd, ans);
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
