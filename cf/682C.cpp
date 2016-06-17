///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( int i=j ; i<N ; i++ )
#define rrep(i,N,j) for( int i=N-1 ; i>=j ; i-- )
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi(i) printf("%d",i)
#define pl(i) printf("%lld",i)
#define pin(i) printf("%d\n",i)
#define pln(i) printf("%lld\n",i)
#define ps printf(" ")
#define pn printf("\n")
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c).begin())i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vl;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int vis[100005]={0};
vector<vector<pair<ll,ll> > > v(100005);
int ans = 0;
ll a[100005];

void dfs(int node,ll sum)
{
    if(sum > a[node])
    {
        return;
    }
    vis[node] = 1;
    int s = sz(v[node]);
    rep(i,0,s)
    {
        if(!vis[(v[node][i]).ff])
        {
            dfs((v[node][i]).ff, max(sum+(v[node][i]).ss, (v[node][i]).ss));
        }
    }
}
int main()
{
    int n;
    si(n);
    rep(i,1,1+n)
        sl(a[i]);

    ll p,c;
    rep(i,2,1+n)
    {
        sl(p);sl(c);
        v[i].pb(mp(p,c));
        v[p].pb(mp(i,c));
    }
    
    dfs(1,0);

    rep(i,1,1+n)
    {
        if(!vis[i])
            ans++;
    }

    pin(ans);
    return 0;
}
