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
  string s;
  cin >> s;
  if (s.length() <= 10) {
    cout << s << endl;
  } else {
    cout << s[0];
    cout << s.length() - 2;
    cout << s[s.length() - 1];
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
