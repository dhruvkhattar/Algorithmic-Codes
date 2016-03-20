///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( ll i=j ; i<N ; i++ )
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
    ll t;
    sl(t);

    ll a,d,r,l;

    ll x;

    ll sum;
    ll no;
    ll times;
    ll rsum;

    while( t-- )
    {
        sum = 0;
        rsum = 0;
        sl(a);sl(d);sl(l);sl(r);

        a = a%9;
        if( a == 0 )
            a = 9;
        
        if ( d != 0 )
        {
            d = d%9;
            if( d == 0 )
                d = 9;
        }

        l--;
        no = r-l;
        
        if ( l != 0 )
        {
            l = l%9;
            if( l == 0 )
                l = 9;
        }
        
        r = r%9;
        if( r == 0 )
            r = 9;

        vl v;

        x = ( a + d*l )%9;
        if( x == 0 )
            x = 9;

        v.pb(x);

        rep(i,0,9)
        {
            x = (x+d)%9;
            if( x == 0 )
                x = 9;
            v.pb(x);
        }

    /*    rep(i,0,10)
        {
            pl(v[i]);ps;
        }
        pn;
*/
        rep(i,0,9)
            rsum = rsum + v[i];

        times = no/9;
        sum = sum + times*rsum;

        times = no%9;

        rep(i,0,times)
            sum = sum + v[i];
        
        pln(sum);
    }
    return 0;
}
