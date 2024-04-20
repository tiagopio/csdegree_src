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

int mat[5][14];

void solve() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i += 3) {
    int n = ((s[i] - '0') * 10) + (s[i + 1] - '0');
    char c = s[i + 2];
    // cout << n << endl;
    //cout << c << endl;
    //if (c == 'P') cout << n << endl;
    if (c == 'C') mat[0][n]++;
    if (c == 'E') mat[1][n]++;
    if (c == 'U') mat[2][n]++;
    if (c == 'P') mat[3][n]++;
  }
  for (int i = 0; i < 4; i++) {
    int ans = 0;
    bool bad = false;
    for (int j = 1; j < 14; j++) {
      if (!mat[i][j]) ans++;
      else if (mat[i][j] > 1) bad = true;
    }
    if (!bad) cout << ans << endl;
    else cout << "erro" << endl;
    //cout << endl;
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
