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

  vector<int> count(130, 0);
  vector<char> vec(n);
  // vector<string> cases;
  int qtd = 0;

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
    count[vec[i]]++;
  }

  for (int i = 0; i < 130; i++) if (count[i]) qtd++;
  for (int i = 0; i < 130; i++) count[i] = 0;

  int j = 0;
  string s;
  bool flag = false;
  int ans = INT_MAX;
  while(j < n + 1) {
    if (flag) {
      s += vec[j];
      count[vec[j]]++;
      j++;
    }

    int lqtd = 0;
    for (int i = 0; i < 130; i++) if (count[i]) lqtd++;

    if (lqtd == qtd) {
      ans = min(ans, (int)s.length());
      //cases.push_back(s);
      count[s[0]]--;
      s.erase(0, 1);
      flag = false;
    } else flag = true;
  }
  
  // int ans = INT_MAX;
  // for (auto i : cases) {
  //   cout << i << endl;
  //   ans = min(ans, (int)i.length());
  // }
  cout << ans << endl;
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
