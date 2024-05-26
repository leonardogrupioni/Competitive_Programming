#include <bits/stdc++.h>
using namespace std;

#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define rep(i,a,b) for(int i =a;i<b;i++)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef tuple<int,int,int> tii;
typedef pair<int,int> pii;
typedef vector<pii> vpp;
const int MAXN =200;
int n,m;
int mapa[MAXN][MAXN];
bool vis[MAXN][MAXN];

bool isIn(int lin, int col){
    if(min(lin,col)<0)return false;
    if(lin>=n)return false;
    if(col>=m)return false;
    return true;
}

int dfs(int lin, int col){
    vis[lin][col]=true;
    int ans =1;
    if(isIn(lin-1,col) && !vis[lin-1][col] && mapa[lin][col]==mapa[lin-1][col]) ans+=dfs(lin-1,col);
    if(isIn(lin+1,col) && !vis[lin+1][col] && mapa[lin][col]==mapa[lin+1][col]) ans+=dfs(lin+1,col);
    if(isIn(lin,col-1) && !vis[lin][col-1] && mapa[lin][col]==mapa[lin][col-1]) ans+=dfs(lin,col-1);
    if(isIn(lin,col+1) && !vis[lin][col+1] && mapa[lin][col]==mapa[lin][col+1]) ans+=dfs(lin,col+1);
    return ans;
}

int32_t main(){
    sws
    cin>>n>>m;
    int ans = (1ll<<30);
    rep(i,0,n){
        rep(j,0,m)cin>>mapa[i][j];
    }
    rep(i,0,n){
        rep(j,0,m)if(!vis[i][j])ans=min(ans,dfs(i,j));
    }
    cout<<ans;
}