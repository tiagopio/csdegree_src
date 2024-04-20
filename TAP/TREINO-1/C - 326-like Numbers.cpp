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

int ok(int x) {
  int a, b, c;

  int tmp = x;
  c = tmp % 10;
  tmp /= 10;
  b = tmp % 10;
  tmp /= 10;
  a = tmp;
  if (a * b == c) return 1;
  return 0;
}

void solve() {
  int n;
  cin >> n;
  int a, b, c;

  int tmp = n;
  c = tmp % 10;
  tmp /= 10;
  b = tmp % 10;
  tmp /= 10;
  a = tmp;

  if (a * b == c) cout << n << endl;
  else {
    while(!ok(n)) {
      n++;
    }
    cout << n << endl;
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
