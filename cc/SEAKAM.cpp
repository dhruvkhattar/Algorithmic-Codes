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


int ans ;
int n;

int vis[100005];

void dfs( int node , int cnt , vvi v)
{
    vis[node] = 1;
    if( cnt >= n )
    {
        ans = (ans + 1)%mod;
        vis[node] = 0;
        return;
    }
    
    int size = sz(v[node]);

    rep(i,0,size)
        if( !vis[v[node][i]] )
            dfs(v[node][i],cnt+1,v);
    
    vis[node] = 0;
}


int main()
{
    int x,y,t,m;

    si(t);

    while( t-- )
    {
        si(n);si(m);

        ans = 0;
        vvi v(100005);

        vi::iterator it;

        rep(i,1,1+n)
        {
            rep(j,1,1+n)
            {
                if( j!=i )
                    v[i].pb(j);
            }
        }

        rep(i,0,m)
        {
            si(x);si(y);

            it = find(all(v[x]),y);
            v[x].erase(it);
            
            it = find(all(v[y]),x);
            v[y].erase(it);
        }

        rep(i,1,n+1)
            dfs(i,1,v);

        pin(ans);
    }
    return 0;
}
