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

    
ll a[1000006];
ll sum[1000006];

int main()
{
    ll n,k;

    sl(n);
    sl(k);


    rep(i,0,n)
    {
        sl(a[i]);
        sum[i+1] = ((2*a[i])%mod + sum[i])%mod;
    }
    ll ans = 0;
    ll yo = 0;

    rep(i,0,k)
    {
        ans = (ans + ((((ll)(i+1)*(i+1))%mod)*a[i])%mod)%mod;
        yo = (yo + ((2*i+1)*a[i])%mod)%mod;
    }

    pl(ans);ps;

    rep(i,1,n-k+1)
    {
        ans = ans - yo;
        if( ans < 0 )
            ans = ans + mod;
        ans = (ans + (((k*k)%mod)*a[i+k-1])%mod)%mod;
        yo = (yo + ((2*k-1)*a[i+k-1])%mod)%mod;
        yo = (yo - sum[i+k-1] + sum[i-1] + a[i-1])%mod;
        if( yo < 0 )
            yo = yo + mod;
        
        pl(ans);ps;
    }
    pn;
    return 0;
}
