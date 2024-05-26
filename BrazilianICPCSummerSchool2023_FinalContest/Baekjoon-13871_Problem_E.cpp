#include <bits/stdc++.h>
using namespace std;
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define rep(i, a, b) for(int i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define dbg(x) cout << #x << ": " << x << "\n";
#define ss second

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef tuple<int, int, int> tiii;
typedef pair<int, int> pii;
typedef vector<pii> vpp;

int32_t main() {
    sws
    int n, c, s; cin >> n >> c >> s;
    int ans = 0, cur = 1;

    for (int i = 0; i < c; i++) {
        int com; cin >> com;

        if (cur == s) ans++;

        cur += com;

        if (cur == 0) cur = n;
        if (cur == n + 1) cur = 1;
    }

    if (cur == s) ans++;

    cout << ans << endl;
}
