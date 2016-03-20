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
#define SIZE 4003
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vl;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n,m;

    vii v;

    si(n);
    si(m);

    int a[SIZE];

    int knows[SIZE][SIZE]={0};

    int x,y;
    rep(i,0,m)
    {
        si(x);si(y);
        v.pb(mp(x,y));
        a[x]++;
        a[y]++;
        knows[x][y]=1;
        knows[y][x]=1;
    }

    int ans=12005;

    rep(i,0,m)
    {
        int x = v[i].ff;
        int y = v[i].ss;

        int temp = a[x] + a[y];

        if( temp > ans )
            continue;

        rep(i,0,n)
        {
            if(knows[x][i]==1 && knows[y][i])
            {
                if( temp+a[i] < ans )
                    ans=temp+a[i];
            }
        }
    }
    if(ans==12005)
        pin(-1);
    else
        pin(ans-6);
    return 0;
}
