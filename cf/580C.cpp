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

int ans=0;
int a[100005]={0};
int vis[100005]={0};
vvi v(100005);
int m;

void dfs(int x,int lol)
{
    if(lol+a[x]>m)
        return;
    int size = sz(v[x]);
    rep(i,0,size)
    {
        if(size==1 && vis[v[x][i]]==1)
        {
            ans++;
            return;
        }
        if(vis[v[x][i]]==0)
        {
            vis[v[x][i]]=1;
            if(a[x]==0)
                dfs(v[x][i],0);
            else
                dfs(v[x][i],lol+a[x]);
        }
    }

}

int main()
{
    int n;
    si(n);si(m);

    rep(i,1,n+1)
    {
        si(a[i]);
    }


    int x,y;
    rep(i,0,n-1)
    {
        si(x);si(y);
        v[x].pb(y);
        v[y].pb(x);
    }

    vis[1]=1;
    dfs(1,0);

    pin(ans);
    return 0;
}
