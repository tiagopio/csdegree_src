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
  int N;
  cin >> N;
  
  int o = 0, e = 0, n = 0, z = 0, r = 0;
  for (int i = 0; i < N; i++) {
    char c; cin >> c;
    if (c == 'o') o++;
    if (c == 'e') e++;
    if (c == 'z') z++;
    if (c == 'n') n++; 
    if (c == 'r') r++;
  }
  int one = 0, zero = 0;
  if (n) {
    one = n;
  }
  if (z) {
    zero = z;
  }

  int qtdo = one;
  int qtdz = zero;
  for (int i = 0; i < qtdo; i++) {
    if (one) {cout << 1 << " "; one--;}
  }
  for (int i = 0; i < qtdz; i++) {
    if (zero) {cout << 0 << " "; zero--;}
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
