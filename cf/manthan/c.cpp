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
int vis[10004];
int n;
int arr[10004];
int pos = 0;
int flag = 0;

void solve(int node)
{
    if( node == n-1 )
    {
        arr[++pos] = n;
        flag = 1;
        return;
    }
    vis[node+1] = 1;
    int yo = node+1;

    int s = sz(v[yo]);

    rep(i,0,s)
        if(!vis[v[yo][i]])
        {
            arr[++pos] = v[yo][i];
            solve(v[yo][i]);
            if( !flag )
                pos--;
        }
}

int main()
{
    int m,len;
    si(n);

    char a[10004];
    char b[1004];
    vector<vector<string> > lol(100000);
    scanf("%s",a);

    reverse(a,a+n);

    printf("%s\n",a);

    int x,yo;

    si(m);
    rep(i,0,m)
    {
        scanf("%s",b);
        lol[i].pb(b);
        len = strlen(b);
        x = 0;
        yo = 0;

        rep(j,0,n)
        {
            if(x==0)
                yo = j;
            if(a[j] == b[x])
            {
                x++;
                if(x == len)
                {
                    x = 0;
                    v[yo].pb(j);
                    v[j].pb(yo);
                }
            }
        }
    }

    rep(i,0,n+1)
    {
        int h = sz(v[i]);
        pi(i);ps;
        rep(j,0,h)
        {
            pi(v[i][j]);ps;
        }
        pn;
    }

    arr[0] = 0;
    solve(-1);

    rep(i,0,pos+1)
        pin(arr[i]);

    return 0;
}
