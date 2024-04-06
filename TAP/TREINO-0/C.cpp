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
  int mt[n][3];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      int e; cin >> mt[i][j];
    }
  }

  int c = 0;
  while(c < 3) {
    int col = 0;
    for (int i = 0; i < n; i++) {
      col += mt[i][c]; 
    }
    if(col != 0) {
      cout << "NO\n";
      return;
    }
    c++;
  }
  cout << "YES\n";
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
