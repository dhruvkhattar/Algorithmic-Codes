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

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}


int main()
{
    ll t,a,b;

    sl(t);sl(a);sl(b);

    if(a==b)
    {
        printf("1/1\n");
        return 0;
    }

    if( a>b )
        swap(a,b);

    ll g = gcd(a,b);
    ll lcm = b/g;

    if( lcm > t/a )
    {
        ll ans = min(a-1,t);
        printf("%lld/%lld\n",ans/gcd(ans,t),t/gcd(ans,t));
        return 0;
    }

    lcm *= a;

    ll no = t/lcm;

    ll ans;
    if( no == 0)
        ans = min(t,a-1);
    else
    {
        ans = a-1;
        ans += (no-1)*a;
        ans += min( a , t%lcm + 1 );
    }
     
    printf("%lld/%lld\n",ans/gcd(ans,t),t/gcd(ans,t));

    return 0;
}
