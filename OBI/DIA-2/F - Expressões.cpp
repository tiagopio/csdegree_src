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
  vector<char> ans;
  string s;
  cin >> s;

  ans.push_back(s[0]);
  
  for (int i = 1; i < s.length(); i++) {
    if (ans.back() == '(' && s[i] == ')' || ans.back() == '[' && s[i] == ']' || ans.back() == '{' && s[i] == '}') ans.pop_back();
    else ans.push_back(s[i]);
  }

  if (ans.size()) cout << "N\n";
  else cout << "S\n";
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
