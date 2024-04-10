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
  // vector<char> a(n, 'A');
  vector<int> id;
  // for (int i = 2; i <= n; i++) {
  //   for (int j = i; j <= n; j+=i) {
  //     // cout << j << endl;
  //     if (a[j - 1] == 'A') a[j - 1] = 'F';
  //     else if (a[j - 1] == 'F') a[j- 1] = 'A';
  //   }
  // }
  // int x = 1;
  // for (auto i : a) {
  //   cout << x << " = " << i << endl;
  //   x++;
  // }
  int i = 1;
  int j = 2;
  int ans = 0;
  // id.push_back(i);
  while(i < n) {
    id.push_back(i);
    i += j + 1;
    j += 2;
  }
  cout << id.size() << endl;
  for (auto i : id) {
    cout << i << " ";
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
