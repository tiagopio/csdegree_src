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
  char x;
  while(cin >> x) {
    if (x == '{') s += '{';
    else if (x == '}') s += '}';
  }
  while(1) {
    int p = s.find("{}");
    if (p != string::npos) {
      s.erase(p, 2);
    } else break;
  }
  if (s.length() == 0) cout << "S\n";
  else cout << "N\n";
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
