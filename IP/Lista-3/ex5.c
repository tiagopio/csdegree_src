    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long ll;
    #define pb push_back
     
    void solve() {
      int m, n;
      while (1) {
        cin >> m >> n;
        if (m == 0 && n == 0) break;
        vector<ll> sum;
     
        int s = m + n;
     
        while (s > 0) {
          sum.pb(s % 10);
          s /= 10;
        }
     
        reverse(sum.begin(), sum.end());
     
        for (int i = 0; i < sum.size(); i++) {
          if (sum[i] != 0) {
            cout << sum[i];
          }
        }
        cout << endl;
      }
    }
     
    int main() {
      int t = 1;
      //cin >> t;
      while(t--) {
        solve();
      }
     
      return 0;
    }