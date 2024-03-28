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

  int mat[5000][3];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      mat[i][j] = 0;
    }
  }
  
  int n1 = 0, n2 = 0, n3 = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    
    if (x == 1) {
      mat[n1][0] = i + 1;
      n1++;
    }
    if (x == 2) {
      mat[n2][1] = i + 1;
      n2++;
    }
    if (x == 3) {
      mat[n3][2] = i + 1;
      n3++;
    }
  }
  
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (mat[i][0] && mat[i][1] && mat[i][2]) ans++;
  }
  cout << ans << endl;
  for (int i = 0; i < n; i++) {
    if (mat[i][0] && mat[i][1] && mat[i][2]) {
      cout << mat[i][0] << " " << mat[i][1] << " " << mat[i][2] << endl;
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
