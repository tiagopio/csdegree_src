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
  string s;
  cin >> s;
  
  int sf = 0, fs = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 'S' && s[i + 1] == 'F') sf++;
    if (s[i] == 'F' && s[i + 1] == 'S') fs++;
  }
  if (sf > fs) cout << "YES\n";
  else cout << "NO\n";
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
