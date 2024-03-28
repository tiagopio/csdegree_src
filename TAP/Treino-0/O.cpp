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
  vector<int> a;
  cin >> s;
  
  for (int i = 0; i < s.length(); i+=2) {
    a.push_back(s[i] - '0');
  }
  sort(all(a));
  for (int i = 0; i < a.size(); i++) {
    cout << a[i];
    if (i + 1 != a.size()) cout << "+";
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
