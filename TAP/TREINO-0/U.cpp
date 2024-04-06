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

  int mxe = -inf, mne = inf;
  int idmin, idmax;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] <= mne) {
      mne = a[i];
      idmin = i;
    }
  }
  int ansmin = 0;
  while(idmin != n - 1) {
    swap(a[idmin], a[idmin + 1]);
    idmin++; 
    ansmin++;
  }
  
  for (int i = 0; i < n; i++) {
    if (a[i] > mxe) {
      mxe = a[i];
      idmax = i;
    }
  }
  
  int ansmax = 0;
  while(idmax != 0) {
    swap(a[idmax], a[idmax - 1]);
    idmax--; 
    ansmin++;
  }
  cout << ansmin + ansmax << endl;
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
