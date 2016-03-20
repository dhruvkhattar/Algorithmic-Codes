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

int main()
{
    int n;
    si(n);

    vector< vector<pair<int,int> > > v(50);

    int a[50];

    rep(i,1,n+1)
        si(a[i]);

    v[0].pb(mp(0,1));

    rep(i,1,1+n)
    {
        int x = 0;

        rrep(j,i+1,1)
        {
            x+=a[j];
            int size = sz(v[j-1]);
            rep(k,0,size)
            {
                int si = sz(v[i]);
                int yo = v[j-1][k].ff^x;

                int flag=0;
                rep(l,0,si)
                {
                    if(yo==v[i][l].ff)
                    {
                        v[i][l].ss += v[j-1][k].ss;
                        flag=1;
                    }
                }
                if(flag==0)
                    v[i].pb(mp(v[j-1][k].ff^x,v[j-1][k].ss));
            }
        }
    }

    int size = sz(v[n]);
    int ans=0;

    rep(i,0,size)
        if(v[n][i].ff==0)
            ans+=v[n][i].ss;

    pin(ans);
    return 0;
}
