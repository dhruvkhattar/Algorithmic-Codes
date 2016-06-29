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
int c[100005];
int vis[100005];
int n;

int isBi(int src)
{

    vis[src] = 1;
    c[src] = 1;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        int s = sz(v[u]);
        for(int i = 0; i < s; i++)
        {
            if(c[v[u][i]] == -1)
                c[v[u][i]] = 1 - c[u];
            else if(c[v[u][i]] == c[u])
                return 0;
            if(!vis[v[u][i]])
            {
                q.push(v[u][i]);
                vis[v[u][i]] = 1;
            }
        }
    }
    return 1;
}

int Bi(int src)
{
    for(int i = 0; i < 100005; i++)
        c[i] = -1;
    int yo;
    yo = isBi(src);
    if(!yo)
        return 0;
    rep(i,1,n+1)
    {
        if(!vis[i])
        {
            yo = isBi(i);
            if(!yo)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int m, x, y;
    si(n);
    si(m);
    int src;

    si(x);si(y);
    v[x].pb(y);
    v[y].pb(x);
    src = x;
    rep(i,1,m)
    {
        si(x);si(y);
        v[x].pb(y);
        v[y].pb(x);
    }

    if(!Bi(src))
        pin(-1);
    else
    {
        int o = 0;
        int e = 0;
        rep(i,1,n+1)
        {
            if(v[i].size())
            {
                if(c[i] == 1)
                    o++;
                else if(c[i] == 0)
                    e++;
            }
        }
        pin(o);
        rep(i,1,n+1)
        {
            if(c[i] == 1 && v[i].size())
            {
                pi(i);ps;
            }
        }
        pn;
        pin(e);
        rep(i,1,n+1)
        {
            if(c[i] == 0 && v[i].size())
            {
                pi(i);ps;
            }
        }
        pn;
    }

    return 0;
}
