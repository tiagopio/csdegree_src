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
  ll n;
  cin >> n;
  vector<int> a(n);
  
  ll bc = 0, ch = 0, bi = 0; 
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int x = 0, y = 1, z = 2;
  for (int i = 0; i < n; i++) {
    if (i == x) {
      ch += a[i];
      x += 3;
    }
    if (i == y) {
      bi += a[i];
      y += 3;
    }
    if (i == z) {
      bc += a[i];
      z += 3;
    }
  } 
  ll maxx = max({ch, bi, bc});
  if (maxx == bi) cout << "biceps\n";
  else if (maxx == bc) cout << "back\n";
  else if (maxx == ch) cout << "chest\n";
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
