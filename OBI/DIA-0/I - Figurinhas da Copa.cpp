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

int vec[300];

void solve() {
  int n, a, b;
  cin >> n >> a >> b;
  
  for (int i = 0; i < a; i++) {
    int x; cin >> x;
    vec[x]++;
  }

  for (int i = 0; i < b; i++) {
    int x; cin >> x;
    if (vec[x]) vec[x] = 0;
    else continue;
  }
  int ans = 0;
  for (int i = 0; i < 300; i++) {
    ans += vec[i];
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout << fixed;
  cout << setprecision(2);
  int t = 1;
  // cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
