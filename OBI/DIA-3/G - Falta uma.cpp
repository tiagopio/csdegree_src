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

int fat(int x) {
  if (x <= 1) return 1;
  return x * fat(x - 1);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  map<vector<int>, int> mp;
  int p = fat(n);
  for (int i = 0; i < p; i++) {
    vector<int> sub;
    for (int i = 0; i < n; i++) {
      int e; cin >> e;
      sub.push_back(e);
    }
    mp[sub]++;
  }

  while(1) {
    if (!mp.count(a)) {
      for (auto i : a) {
        cout << i << " ";
      }
      cout << endl;
      return;
    } else next_permutation(all(a));
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
