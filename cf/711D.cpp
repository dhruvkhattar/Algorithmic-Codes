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

int edge[200005];
ll powers[200005];
int vis[200005];
int len[200005];

int main()
{
    int n;
    si(n);

    rep(i,1,1+n)
        si(edge[i]);

    powers[0] = 1;
    rep(i,1,n+1)
        powers[i] = (powers[i-1] * 2) % mod; 

    int path = n;

    vi cycles;

    rep(i,1,1+n)
    {
        if (!vis[i])
        {
            vis[i] = i;
            len[i] = 0;
            int yo = i;
            int l = 0;
            while(1)
            {
                yo = edge[yo];
                if(vis[yo] == i)
                {
                    cycles.pb(l - len[yo] + 1);
                    path -= l - len[yo] + 1;
                    break;
                }
                else if (vis[yo])
                    break;
                l++;
                vis[yo] = i;
                len[yo] = l;
            }
        }
    }

    ll ans = powers[path];

    int s = sz(cycles);
    rep(i,0,s)
        ans = (ans * (powers[cycles[i]] - 2) ) % mod;

    pln(ans);

    return 0;
}
