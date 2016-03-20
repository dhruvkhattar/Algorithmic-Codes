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

ll powe(ll b, ll e )
{
    ll remainder;
    ll x = 1;

    while (e != 0)
    {
        remainder = e % 2;
        e= e/2;

        if (remainder == 1)
            x = (x * b) % mod;
        b= (b * b) % mod; 
    }
    return x % mod;
}
int main()
{
    ll ans,t,n,x,m,mult;
    sl(t);

    ll a[100005];

    while( t-- )
    {
        sl(n);sl(x);sl(m);
        rep(i,1,n+1)
        {
            sl(a[i]);
            a[i] %= mod;
        }
        mult = 1;
        ans = 0;

        rep(i,1,1+x)
        {
            ans = (ans + (mult*a[x-i+1])%mod)%mod;
            mult = (mult*m)%mod;
            mult = (mult*powe(i,mod-2))%mod;
            m = (m+1)%mod;
        }
        pln(ans);
    }
    return 0;
}
