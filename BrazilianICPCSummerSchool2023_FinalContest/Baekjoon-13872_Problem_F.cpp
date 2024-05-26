//TLE
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s; cin >> s;
    int n; cin >> n;
    int tam = (int)s.size();

    vector<int> p(n);

    for (int i = 0; i < n; i++) cin >> p[i];

    vector<int> last(5e5 + 7, -1);

    vector<int> ult_p(n), ult_char(tam);

    for (int i = 0; i < n; i++) ult_p[i] = last[p[i]], last[p[i]] = i;

    vector<int> last_char(30, -1);

    for (int i = 0; i < tam; i++) {
        int c = s[i] - 'a';
        ult_char[i] = last_char[c];
        last_char[c] = i;
    }

    int ans = 0;

    // for (auto x: ult_char) cout << x << ' ';
    // cout << endl;

    // for (auto x: ult_p) cout << x << ' ';
    // cout << endl;

    for (int i = 0; i < tam - n + 1; i++) {
        bool ok = true;
        for (int j = 0; j < n && ok; j++) {
            if (ult_p[j] == -1) ok &= ult_char[i + j] < i;
            else ok &= (ult_p[j] == ult_char[i + j] - i);
        }
        if (ok) ans++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1;
    // int caso = 0;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << ++caso << ": ";
        solve();
    }
    return 0;
}
