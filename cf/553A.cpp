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
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

ll powmod(ll a , ll b);

int main()
{
    int n;
    si(n);

    ll f[1003];
    f[0]=1;
    rep(i,1,1001)
    {
        f[i]=(f[i-1]*i)%mod;
    }
    ll ans=1;
    ll a[1003];
    sl(a[1]);
    ll sum=a[1];
    rep(i,2,n+1)
    {
        ll x;
        sl(x);
        sum+=x;
        ans=(((((ans*f[sum-1])%mod)*powmod(f[x-1],mod-2))%mod)*powmod(f[sum-x],mod-2))%mod;
    }

    pln(ans);
    return 0;
}
ll powmod(ll a, ll b)
{
        if(b==0)
                    return 1;
        if(b&1==1)
                    return (a*powmod((a*a)%mod,b>>1))%mod;
        else
                    return powmod((a*a)%mod,b>>1)%mod;
}
