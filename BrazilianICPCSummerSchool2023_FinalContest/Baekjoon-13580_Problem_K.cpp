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
typedef tuple<int,int,int> tiii;
typedef pair<int,int> pii;
typedef vector<pii> vpp;

int32_t main(){
    sws
    int a,b,c;
    cin>>a>>b>>c;

    bool ans = false;
    ans|= (a==b+c);
    ans|= (b==a+c);
    ans|= (c==b+a);
    ans|= (a==b);
    ans|= (b==c);
    ans|= (a==c);

    ans? cout<<"S" : cout<<"N"; //if ternario
}
