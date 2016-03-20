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

ll ans = 0;
vvi v(2005);
vi yo;
int vis[2005];

void solve(int node, int c,int start)
{
    vis[node] = 1;
    if(c == 4)
    {
        int s = sz(v[node]);
        rep(i,0,s)
        {
            if(v[node][i] == start)
            {
                ans++;
                vis[node] = 0;
                return;
            }
        }
        vis[node] = 0;
        return;
    }

    int s = sz(v[node]);
    rep(i,0,s)
    {
        if(!vis[v[node][i]])
            solve(v[node][i],c+1,start);
    }
    vis[node] = 0;

}
int main()
{
    int n;
    si(n);

    int x;

    rep(i,1,1+n)
    {
        rep(j,1,1+n)
        {
            si(x);
            if(x)
                v[i].pb(j);
        }
    }

    rep(i,1,1+n)
    {
        solve(i,1,i);
    }

    pln(ans/8);
    return 0;
}
