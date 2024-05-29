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

int ans = 0;

int fib(int x) {
  if (x <= 1) return x;
  ans++;
  return fib(x - 1) + fib(x - 2);
}

void solve() {
  int n; cin >> n;
  fib(n);
  cout << ans * 2 + 1 << endl;
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
