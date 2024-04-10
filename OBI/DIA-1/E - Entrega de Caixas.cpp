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
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];

  if (a[0] < a[1] && a[1] < a[2]) cout << 1 << endl;
  else if (a[0] + a[1] < a[2]) cout << 1 << endl;
  else if (a[0] < a[1] && a[1] == a[2]) cout << 2 << endl;
  else if (a[0] == a[1] && a[1] < a[2]) cout << 2 << endl;
  else cout << 3 << endl;
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
