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
    int n,m;
    si(n);
    si(m);

    vi v;
    rep(i,0,n)
    {
        int x;
        si(x);
        v.pb(x%m);
    }
    int dp[1003]={0};
    int dp2[1003]={0};
    if(n>m)
        printf("YES\n");
    else
    {
        dp2[v[0]]=1;
        rep(i,2,n+1)
        {
            dp[v[i-1]]=1;
            rep(j,0,m)
            {
                if(dp2[j]==1)
                {
                    dp[(j+v[i-1])%m]=1;
                    dp[j]=1;
                }
            }

            rep(j,0,m)
            {
                dp2[j]=dp[j];
                dp[j]=0;
            }
        }

        if(dp2[0]==1)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
