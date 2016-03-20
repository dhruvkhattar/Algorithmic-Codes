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

vl v;

ll dp[100005][2];
ll sum[100005];

ll n;

int main()
{
    ll t,x;
    sl(t);

    while( t-- )
    {
        ll dp2[100005]={0};
        v.clear();
        sl(n);
        rep(i,0,n)
        {
            sl(x);
            v.pb(x);
        }

        sum[n]=0;

        rrep(i,n,0)
            sum[i] = sum[i+1] + v[i];

        dp2[n-1] = v[n-1];
        dp2[n-2] = dp2[n-1] + v[n-2];
        dp2[n-3] = dp2[n-2] + v[n-3];

        rrep(i,n-3,0)
            dp2[i] = max( v[i] + sum[i+1] - dp2[i+1] ,max( v[i] + v[i+1] + sum[i+2] - dp2[i+2] , v[i] + v[i+1] + v[i+2] + sum[i+3] - dp2[i+3] ));

        pln(dp2[0]);

       // pln(solve(0,0));
    }

    return 0;
}
