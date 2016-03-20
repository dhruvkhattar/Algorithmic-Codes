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
    int t,n,k,m,x,sv;

    si(t);
    int a[100005];
    int b[100005];

    while( t-- )
    {
        vi v;
        vi c;
        si(n);si(k);si(m);

        rep(i,0,n)
            si(a[i]);
        rep(i,0,n)
        {
            si(b[i]);
            if( a[i] > b[i] )
                v.pb(a[i]-b[i]);
        }

        rep(i,0,k+m)
        {
            si(x);
            c.pb(x);
        }
        
        sort( rall(v) );
        sort( rall(c) );

        sv = sz(v);
        ll ans = 0;
        int j = 0;

        rep(i,0,sv)
        {
            ans = (ll)ans + v[i];
            while( j < k+m )
            {
                if( v[i] >= c[j] )
                {
                    ans = (ll)ans - c[j];
                    j++;
                    break;
                }
                j++;                
            }
        }

        pln(ans);
    }
    return 0;
}
