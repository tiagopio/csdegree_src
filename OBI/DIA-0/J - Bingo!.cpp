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
  int n, k, u;
  cin >> n >> k >> u;
  
  vector<vector<bool>> vec(n, vector<bool> (u + 1, false));
  vector<int> count(1005, k);
  
  int x = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      int e; cin >> e;
      vec[i][e] = 1;
    } 
  }
  vector<int> winners;
  for (int i = 0; i < u; i++) {
    int e; cin >> e;
    
    bool flag = false;
    for (int j = 0; j < n; j++) {
      if (vec[j][e]) {
        count[j]--;
        if (count[j] == 0) {
          // dbg(j+1);
          winners.push_back(j + 1);
          flag = true;
        }
      }
    }
    if (flag) {
      for (int m = 0; m < winners.size(); m++) {
        cout << winners[m] << " ";
      }
      cout << endl;
      return;
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
