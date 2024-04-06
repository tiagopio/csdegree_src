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
  
  int e = 0, o = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) e++;
    else o++;
  }
  

  if (o > e) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        cout << i + 1 << endl;
        return;
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2) {
        cout << i + 1 << endl;
        return;
      }
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
