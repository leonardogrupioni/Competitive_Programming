#include <bits/stdc++.h>
using namespace std;

#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define rep(i,a,b) for(int i =a; i<b; i++)
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

int getNum(char a) {
    return a - 'a';
}

int32_t main() {
    sws
    string s;
    string aux="";
    cin >> s;
    set<char> st;
    st.insert('a'); st.insert('i');
    st.insert('o'); st.insert('e');
    st.insert('u');
    for(auto c : s) {
        if(st.find(c) == st.end()) aux += c;
    }

    string aux2 = aux;
    reverse(aux2.begin(), aux2.end());

    bool y = (aux == aux2);

    y? cout << "S" : cout << "N";
}
