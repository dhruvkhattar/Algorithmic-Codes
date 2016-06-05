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

ll powmod(ll a, ll b)
{
    ll r;
    ll ret = 1;

    while(b)
    {
        r = b%2;
        b = b/2;
        if(r)
            ret = (ret*a)%mod;
        a = (a*a)%mod;
    }
    return ret;
}

int main()
{
    int t,x;
    ll z,ans,mul,n,k,yo,i;
    si(t);

    while(t--)
    {
        sl(n);sl(k);
        z = 0;
        rep(j,0,n)
        {
            si(x);
            if (x == 0)
                z++;
        }
        if(z)
        {
            n -= z;
            yo = min(n,k);

            mul = 1;
            ans = 1;
            i = 1;
            
            while(i <= yo)
            {
                mul = (((mul*(n-i+1))%mod)*powmod(i, mod - 2))%mod;
                ans = (ans+mul)%mod;
                i += 1;
            }
        }
        else
        {
            yo = min(n,k);

            if(k%2)
            {
                mul = n;
                ans = n;
                i = 3;
            }
            else
            {
                mul = 1;
                ans = 1;
                i = 2;
            }

            while(i <= yo)
            {
                mul = (((((mul*(n-i+2))%mod)*(n-i+1))%mod)*powmod((i*(i-1))%mod, mod - 2))%mod;
                ans = (ans+mul)%mod;
                i += 2;
            }
        }
        pln(ans);
    }
    return 0;
}
