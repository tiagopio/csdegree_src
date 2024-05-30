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
  vector<int> a(n);


  for (int i = 0; i < n; i++) cin >> a[i];
  
  int s = a[0] + a[n - 1];
  int i = 0, j = n - 1;
  bool bad = false;
  while(i <= j) {
    int ts = a[i] + a[j];
    i++;
    j--;
    if (ts != s) {
      bad = true;
      break;
    }
  }
  
  if (bad) cout << "N\n";
  else cout << "S\n";
  
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
