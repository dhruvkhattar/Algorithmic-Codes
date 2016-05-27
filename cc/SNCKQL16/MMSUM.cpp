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
    int t,n;
    ll mi;
    ll a[100005];
    si(t);
    ll ans;
    while(t--)
    {
        mi = -mod;
        ll dp[100005][2]={0};
        si(n);
        rep(i,0,n)
        {
            sl(a[i]);
            mi = max(a[i],mi);
        }
        dp[0][0] = max(0LL,a[0]);
        dp[0][1] = 0LL;
        
        ans = max(dp[0][0],dp[0][1]);
        rep(i,1,n)
        {
            dp[i][1] = max(0LL,max(dp[i-1][1]+a[i],dp[i-1][0]));
            dp[i][0] = max(dp[i-1][0]+a[i],0LL);
            ans = max(ans,max(dp[i][1],dp[i][0]));
        }
        if(ans == 0)
            pln(mi);
        else
            pln(ans);
    }
    return 0;
}
