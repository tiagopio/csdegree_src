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
  list<int> a;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    a.push_back(x);
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    a.push_back(x);
  }
  a.sort();
  while(!a.empty()) {
    cout << a.front() << " ";
    a.pop_front();
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
