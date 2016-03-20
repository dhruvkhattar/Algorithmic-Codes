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

vvi v(100005);
int vis[100005];
stack<int> s;

void dfs1(int x)
{
    vis[x] = 1;
    
    tr(v[x],it)
        if(!vis[*it])
            dfs1(*it);

    s.push(x);
}

void dfs2(int x)
{
    vis[x] = 1;
    pi(x);ps;
    
    tr(v[x],it)
        if(!vis[*it])
            dfs2(*it);
}

int main()
{
    int n,e,p,x,y;
    si(n);si(e);si(p);

    rep(i,0,e)
    {
        si(x);si(y);
        v[x].pb(y);
        v[y].pb(x);
    }

    rep(i,1,n+1)
        if( !vis[i] )
            dfs1(i);

    rep(i,1,n+1)
        vis[i] = 0;

    while( !s.empty() )
    {
        x = s.top();
        s.pop();

        if( !vis[x] )
        {
            dfs2(x);
            pn;
        }
    }

    return 0;
}
