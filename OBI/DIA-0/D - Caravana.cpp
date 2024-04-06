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
  vector<int> a(n);
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    a[i] = x;
    ans += x;
  }
  int peso = ans / n;
  for (int i = 0; i < n; i++) {
    if (peso > a[i]) {
      cout << peso - a[i] << endl;
    } else {
      if ((a[i] - peso) != 0) cout << "-";
      cout << a[i] - peso << endl;
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
