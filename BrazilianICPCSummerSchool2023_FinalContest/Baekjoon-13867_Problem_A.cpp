//TLE
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
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef tuple<int, int, int> tiii;
typedef pair<int, int> pii;
typedef vector<pii> vpp;

const int MAXN = 1e5;
bool vls[MAXN];

int32_t main() {
    sws
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int curSz = n;

    vvi gp(n, vi());
    vi conects(n, 0);
    vb mkd(n, false);

    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        gp[x].pb(y);
        gp[y].pb(x);
        conects[x]++; conects[y]++;
    }

    int ctr = 0;
    while (true) {
        bool changed = false;
        // cout << "\n\nLoop " << (ctr++) << "\n";
        // cout << "conections\n";
        // rep(i, 0, n) cout << conects[i] << " ";
        // cout << "\n";

        rep(i, 0, n) {
            if (conects[i] < a || conects[i] >= (curSz - b)) {
                if (!mkd[i]) {
                    curSz--;
                    changed = true;
                    // dbg(i);
                    for (auto c:gp[i]) conects[c]--;
                }
                mkd[i] = true;
            }
        }

        if (!changed) break;
    }
    cout << curSz;
}
