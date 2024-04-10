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
  vector<char> a(3);
  ll n;
  for (int i = 0; i < 3; i++) {
    char c; cin >> c;
    a[i] = c;
  }
  cin >> n;
  // cout << n % 6 << endl;
  if (n % 6 == 0) cout << a[0] << a[1] << a[2];
  if (n % 6 == 1) cout << a[0] << a[2] << a[1];
  if (n % 6 == 2) cout << a[2] << a[0] << a[1];
  if (n % 6 == 3) cout << a[2] << a[1] << a[0];
  if (n % 6 == 4) cout << a[1] << a[2] << a[0];
  if (n % 6 == 5) cout << a[1] << a[0] << a[2];
  cout << endl;
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
