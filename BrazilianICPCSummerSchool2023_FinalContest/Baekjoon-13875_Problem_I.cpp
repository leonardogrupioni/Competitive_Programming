#include <bits/stdc++.h>
using namespace std;
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define rep(i, a, b) for(int i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef tuple<int, int, int> tiii;
typedef pair<int, int> pii;
typedef vector<pii> vpp;
const int MAXN = 31625;
vb isPrime(MAXN, true);
vi primes;

void sieve() {
    rep(i, 2, MAXN) {
        if (!isPrime[i]) continue;
        primes.pb(i);
        for (int q = 2; q * i < MAXN; q++) isPrime[q * i] = false;
    }
}

bool test(int x) {
    for (auto c : primes) if (x % c == 0 && x != c) return false;
    return true;
}

int32_t main() {
    sws
    int n; cin >> n;
    sieve();
    int ans = n;
    while (!test(ans)) ans--;
    cout << ans;
}
