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
  char c, n;
  cin >> c >> n;
  int luana = 0, edu = 0;
  for (int i = 0; i < 3; i++) {
    char x, y;
    cin >> x >> y;
    if (y == n) {
      if (x == 'A') luana += 14;
      if (x == 'J') luana += 15;
      if (x == 'Q') luana += 16;
      if (x == 'K') luana += 17;
    } else {
      if (x == 'A') luana += 10;
      if (x == 'J') luana += 11;
      if (x == 'Q') luana += 12;
      if (x == 'K') luana += 13;
    }
  }
  for (int i = 0; i < 3; i++) {
    char x, y;
    cin >> x >> y;
    if (y == n) {
      if (x == 'A') edu += 14;
      if (x == 'J') edu += 15;
      if (x == 'Q') edu += 16;
      if (x == 'K') edu += 17;
    } else {
      if (x == 'A') edu += 10;
      if (x == 'J') edu += 11;
      if (x == 'Q') edu += 12;
      if (x == 'K') edu += 13;
    }
  }
  if (luana > edu) cout << "Luana\n";
  else if (edu > luana) cout << "Edu\n";
  else cout << "empate\n";
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
