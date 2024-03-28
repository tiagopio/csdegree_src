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
  int n, m;
  cin >> n >> m;
  
  bool change = false;
  for (int i = 0; i < n; i++) {
    if (i % 2) {
      change = !change;
      if (change) {
        for (int x = 0; x < m - 1; x++) {
          cout << ".";
        }
        cout << "#";
      } else {
        cout << "#";
        for (int x = 0; x < m - 1; x++) {
          cout << '.';
        }
      }
    }
    else { 
      for (int j = 0; j < m; j++) {
        cout << "#";   
      }
    }
    cout << endl;
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
