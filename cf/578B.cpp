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
    ll n,k,x;
    sl(n);sl(k);sl(x);

    ll a[200005];
    ll l[200005];
    ll r[200005];

    rep(i,0,n)
        sl(a[i]);

    l[0]=a[0];
    rep(i,1,n)
        l[i]=l[i-1]|a[i];
    
    r[n-1]=a[n-1];
    rrep(i,n-1,0)
        r[i]=r[i+1]|a[i];

    ll mul=1;;
    rep(i,0,k)
        mul*=x;

    ll ans = max( mul*a[0]|r[1] , mul*a[n-1]|l[n-2]);

    rep(i,1,n-1)
        ans = max(ans,l[i-1]|mul*a[i]|r[i+1]);

    pln(ans);

    return 0;
}
