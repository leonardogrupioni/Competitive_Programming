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
#define ld long double
typedef vector<ld> vi;
typedef vector<vi> vvi;
typedef tuple<int, int, int> tiii;
typedef pair<int, int> pii;
typedef vector<pii> vpp;
const ld PI = acos(-1);
const ld eps = 1e-3;

bool eq(ld a, ld b) {
    return abs(a - b) < eps;
}

struct pt {
    ld x, y;
    pt(ld _x = 0, ld _y = 0) : x(_x), y(_y) {}
    ld operator^(const pt p) const {
        return x * p.y - y * p.x;
    }
    pt operator-(const pt p) const {
        return pt(x - p.x, y - p.y);
    }
};

ld sarea(pt p, pt q, pt r) {
    return abs((q - p) ^ (r - q)) / 2;
}

ld polyarea(vector<pt> v) {
    ld ret = 0;
    rep(i, 0, v.size()) {
        ret += sarea(pt(0, 0), v[i], v[(i + 1) % v.size()]);
    }
    return abs(ret);
}

int32_t main() {
    sws
    // cout << tan(PI);
    int n; cin >> n;
    vi dd(n);
    rep(i, 0, n) cin >> dd[i];

    ld ans = 2772.765;
    sort(dd.begin(), dd.end(), greater<int>());
    deque<int> vaux;

    bool beg = true;
    for (auto c: dd) {
        if (beg) {
            vaux.pb(c);
        } else {
            vaux.push_front(c);
        }
        beg ^= 1;
    }

    vi v;
    for (auto c: vaux) v.pb(c);

    ld angle = 2 * PI / n;
    ld curangle = 0.0;
    vector<pt> points;
    rep(i, 0, n) {
        ld a = tan(curangle);
        ld x = v[i] / (sqrt(1 + a * a));
        ld y = a * x;
        points.pb(pt(x, y));
        curangle += angle;
        // cout << x << " " << y << "\n";
    }

    cout << fixed << setprecision(3) << polyarea(points) << "\n";
}

// 2772.765/795.904
// 10002.593/562.91
