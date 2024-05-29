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
  getline(cin, s);
  vector<string> ans;
  string sub;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ' && i + 1 != s.size()) sub.push_back(s[i]);
    else {
      ans.push_back(sub);
      sub.clear();
    }
  }
  for (int i = 0; i < ans.size(); i++) {
    //cout << ans[i] << endl;
    for (int j = 1; j < ans[i].length(); j+=2) {
      cout << ans[i][j];
    }
    if (i + 1 != ans.size()) cout << ' ';
    else cout << s[s.length() - 1];
  }
  cout << endl;
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
