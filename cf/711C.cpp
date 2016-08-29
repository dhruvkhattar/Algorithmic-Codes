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

ll dp[102][102][102];

int main()
{
    int n,m,k;
    int x;
    si(n);si(m);si(k);
    vi c;
    rep(i,0,n)
    {
        si(x);
        c.pb(x);
    }
    ll p[102][102];
    rep(i,1,n+1)
        rep(j,1,m+1)
        sl(p[i][j]);

    if (m==1 && k>1)
    {
        pin(-1);
        return 0;
    }

    ll mi[102] = {0};
    ll lol[102] = {0};
    ll ha[102] = {0};

    rep(i,0,102)
        rep(j,0,102)
            rep(l,0,102)
                dp[i][j][l] = 1e16;

    rep(i,0,102)
    {
        dp[0][1][i] = 0;
        mi[i] = 1e16;
        lol[i] = 1e16;
    }

    rep(i,1,n+1)
    {
        if (c[i-1])
        {
            rep(j,1,k+1)
            {
                if (dp[i-1][j-1][c[i-1]] == mi[j-1])
                    dp[i][j][c[i-1]] = min(dp[i-1][j][c[i-1]], lol[j-1]);
                else
                    dp[i][j][c[i-1]] = min(dp[i-1][j][c[i-1]], mi[j-1]);
            }
        }
        else
        {
            rep(j,1,k+1)
            {
                rep(l,1,m+1)
                {
                    if (dp[i-1][j-1][l] == mi[j-1])
                        dp[i][j][l] = p[i][l] + min(dp[i-1][j][l], lol[j-1]);
                    else
                        dp[i][j][l] = p[i][l] + min(dp[i-1][j][l] , mi[j-1]);
                }
            }
        }
        rep(j,1,k+1)
        {
            rep(l,1,m+1)
                ha[l-1] = dp[i][j][l];
            sort(ha, ha+m);
            mi[j] = ha[0];
            lol[j] = ha[1];
        }
    }

    ll ans = 1e16;
    rep(i,1,m+1)
        ans = min(ans, dp[n][k][i]);
    if (ans >= 1e16)
        pin(-1);
    else
        pln(ans);
    return 0;
}
