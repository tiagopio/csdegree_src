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

bool ok(string s) {
  int j = s.length() - 1;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[j]) return false;
    j--;
  }
  return true;
}

void solve() {
  int n;
  string s;
  cin >> n >> s;
  string tmp = s;
  reverse(all(tmp));
  if (tmp == s) {
    cout << tmp.length() << endl;
    return;
  }
  
  int ans = INT_MIN;
  int step = s.length() - 1;
  while (step) {
    int i = 0;
    while(i + step <= s.length()) {
      string sub = s.substr(i, step);
      if (ok(sub)) {
        cout << sub.length() << endl;
        return;
      }
      i++;
    }
    step--;
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
