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
#define endl '\n'

void solve() {
  int n, m;
  unordered_map<int, int> mpa, mpb;
  cin >> n >> m;
  vector<int> sub(n), subb(m), actual;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mpa[x]++;
    sub[i] = x;
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    subb[i] = x;
  }
  for (int i = 0; i < m; i++) {
    int x = subb[i];
    mpb[x]++;
    actual.push_back(x);
    if (!mpa.count(x)) {
      //dbg(x);
      int bad = 0;
      for (int j = 0; j < actual.size(); j++) {
        int comp = x - actual[j];
        //dbg(actual[j]);
        //dbg(comp);
        if (!mpb.count(comp)) bad++;
        else break;
      }
      if (bad == actual.size()) {
        cout << x << endl;
        return;
      }
    }
  }
  cout << "sim" << endl;
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
