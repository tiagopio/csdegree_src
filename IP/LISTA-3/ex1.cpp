    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long ll;
    typedef long double ld;
    #define pb push_back
     
    void solve() {
      string s1, s2;
      cin >> s1 >> s2;
      vector<char> str;
     
      int size = s1.length() + s2.length();
      for (int i = 0; i < size; i++) {
        if (i < s1.length()) {
          str.pb(s1[i]);
        }
        if (i < s2.length()) {
          str.pb(s2[i]);
        }
      }
     
      for (int i = 0; i < str.size(); i++) {
        cout << str[i];
      }
      cout << endl;
    }
     
    int main() {
      int t;
      cin >> t;
      while (t--) {
        solve();
      }
     
      return 0;
    }