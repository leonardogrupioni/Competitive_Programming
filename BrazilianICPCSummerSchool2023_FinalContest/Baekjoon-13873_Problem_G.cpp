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
    int n, k;
    cin >> n >> k;
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    int slept = 0, cost = 0;
    priority_queue<int, vi, greater<int>> p;

    rep(i, 0, n) {
        if (i >= k && slept < k) {
            if (p.empty() || p.top() < v[i]) {
                if (!p.empty()) {
                    cost += p.top();
                    slept++;
                    p.pop();
                }
                p.push(v[i]);
                continue;
            }
        }
        if (slept >= k) {
            p.push(v[i]);
        } else {
            cost += v[i];
            slept++;
        }
    }
    cout << cost;
}
