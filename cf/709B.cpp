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
    ll x,n,a;
    sl(n);
    sl(a);
    vl v;

    rep(i,0,n)
    {
        sl(x);
        v.pb(x);
    }

    sort(all(v));

    ll ans;
    if (n == 1)
        ans = 0;
    else if (n==2)
        ans = min(abs(a-v[0]), abs(a-v[1]));
    else if (a < v[0])
        ans = v[n-2] - a;
    else if (a > v[n-1])
        ans = a - v[1];
    else
    {
        if( a < v[1])
            ans = min(a - 2*v[0] + v[n-2], min(v[n-1] - a, 2*v[n-2] - v[0] - a));
        else if (a > v[n-2])
            ans = min(2*v[n-1] - a - v[1], min(a - v[0], a - 2*v[1] + v[n-1]));
        else
        {
            ans = v[n-2] - v[0] + a - v[0];
            ans = min(ans, v[n-2] - v[0] + v[n-2] - a);
            ans = min(ans, v[n-1] - v[1] + v[n-1] - a);
            ans = min(ans, v[n-1] - v[1] + a - v[1]);
        }
    }
    pln(ans);
    return 0;
}
