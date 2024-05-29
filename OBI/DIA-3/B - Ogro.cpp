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
  if (n == 0) {
    cout << "*\n*\n";
    return;
  }
  if (n <= 5) {
    for (int i = 0; i < n; i++) {
      cout << 'I';
    }
    cout << "\n*\n";
  } else {
    for (int i = 1; i <= 5; i++) {
      cout << 'I';
    }
    n -= 5;
    cout << endl;
    for (int i = 1; i <= n; i++) {
      cout << 'I';
    }
    cout << endl;
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
