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

ll powmod(ll b, ll e)
{
    ll ret = 1; 
    while(e)
    {    
        if(e%2)
            ret = (ret*b)%mod;
        b = (b*b)%mod;
        e /= 2;
    }    
    return ret; 
}
int main()
{
    int t,x,y;
    si(t);
    while(t--)
    {
        ll n,k;
        sl(n);sl(k);
        rep(i,0,n-1)
        {
            si(x);si(y);
        }
        ll mul1 = 1;
        ll mul2 = k;
        ll mul3 = 1;
        ll ans = k;
        rep(i,2,k+1)
        {
            mul1 = (((mul1*powmod(i-1,mod-2))%mod)*(n-i+1))%mod;
            mul2 = (((mul2*powmod(i,mod-2))%mod)*(k-i+1))%mod;
            mul3 = (mul3*i)%mod;
            ans = (ans + (((mul3*mul1)%mod)*mul2)%mod)%mod;
        }
        pln(ans);
    }
    return 0;
}
