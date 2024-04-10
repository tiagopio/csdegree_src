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

  int d, x;
  int dw = 0, xw = 0;
  for (int i = 0; i < n; i++) {
    cin >> d >> x;
    if (d == 0 && (x == 1 || x == 2)) dw++;
    if (x == 0 && (d == 1 || d == 2)) xw++;

    if (d == 1 && (x == 2 || x == 3)) dw++;
    if (x == 1 && (d == 2 || d == 3)) xw++;

    if (d == 2 && (x == 3 || x == 4)) dw++;
    if (x == 2 && (d == 3 || d == 4)) xw++;

    if (d == 3 && (x == 4 || x == 0)) dw++;
    if (x == 3 && (d == 4 || d == 0)) xw++;

    if (d == 4 && (x == 0 || x == 1)) dw++;
    if (x == 4 && (d == 0 || d == 1)) xw++;
  }
  if (dw > xw) cout << "dario\n";
  else cout << "xerxes\n";

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
