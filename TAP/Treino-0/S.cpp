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
  int r, c;
  cin >> r >> c;
  char mat[r][c];
  bool ok[r][c];
  
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> mat[i][j];
      ok[i][j] = false;
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (mat[i][j] == 'S') {
        for (int x = 0; x < c; x++) {
          ok[i][x] = true;
        }
        continue;
      }
    }
  }

  for (int i = 0; i < c; i++) {
    bool bad = false;
    for (int j = 0; j < r; j++) {
      if (mat[j][i] == 'S') {
        bad = true;
      }
    }
    if (!bad) {
      for (int x = 0; x < r; x++) {
        ok[x][i] = false;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if(!ok[i][j]) ans++;
    }
  }
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
